#include <string>
#include <string_view>

#include <GL/glut.h>

#include "../include/window.h"

namespace twod {
    window::window(const std::string& name, const point& pos)
        :
        name_(name),
        pos_(pos)
    {
        tag_ = glutCreateWindow(name_.c_str());
        if(tag_ < 1) { // all valid tags are > 1
            throw tag_;
        }
        glutDisplayFunc([](){ glClearColor(0, 0, 0, 0); });
    }
    void window::set_name(const std::string& name)
    {
        name_ = name;
        if(glutGetWindow() != tag_) {
            glutSetWindow(tag_);
        }
        glutSetWindowTitle(name_.c_str());
    }
    std::string_view window::name() const
    {
        return name_;
    }
    void window::set_position(const point& pos)
    {
        pos_ = pos;
    }
    point window::position() const
    {
        return pos_;
    }
    window::~window()
    {
        glutDestroyWindow(tag_);
    }
}
