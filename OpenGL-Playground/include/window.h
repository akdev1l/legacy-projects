#pragma once

#include <unordered_map>
#include <string>
#include <string_view>

#include "point.h"

namespace twod {
    /*! \Brief A class representing a Window.
     *
     * Wraps around the glut windowing APIs to expose an RAII-enabled OOP API 
     */
    class window
    {
        public:
            /*! \Brief Possible types fo callback for a window.
             *
             * Each value corresponds to a different event for which a callback can be registered.
             *
             */
            enum callback_type {
                DisplayFunc,
                OverlayFunc,
                ReshapeFunc,
                KeyboardFunc,
                MouseFunc,
                MotionFunc,
                PassiveMotionFunc,
                VisibilityFunc,
                EntryFunc,
                SpecialFunc,
                SpaceballMotionFunc,
                SpaceballRotateFunc,
                SpaceballButtonFunc,
                ButtonBoxFunc,
                DialsFunc,
                TabletMotionFunc,
                TabletButtonFunc,
                MenuStatusFunc,
                IdleFunc,
                TimerFunc
            };

            /*! Creates a Window
             *  @param name Name of the window
             *  @param pos Initial position of the window
             */
            window(const std::string& name, const point& pos = {0, 0});
            void set_position(const point& pos);
            point position() const;

            void set_name(const std::string& name);
            std::string_view name() const;

            template<typename T>
            void register_cb(callback_type type, T cb)
            {
            }

            void unset_cb(callback_type type);
            ~window();
        private:
            std::string name_;
            point pos_;
            int tag_;
    };
}
