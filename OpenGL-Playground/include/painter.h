#pragma once

namespace twod {
    class shape_painter;
    class text_painter;

    class painter
    {
        public:
            virtual void draw(const shape_painter& shape) = 0;
            virtual void draw(const text_painter& shape) = 0;
    };
}
