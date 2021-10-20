#pragma once

#include "point.h"
#include "detail.h"

namespace twod {
    struct vector2d
    {
        point begin, end;
        std::size_t length() const;
    };

    vector2d operator+(const vector2d& left, const vector2d& right);
    vector2d& operator+=(vector2d& left, const vector2d& right);
    vector2d operator-(const vector2d& left, const vector2d& right);
    vector2d& operator-=(vector2d& left, const vector2d& right);
    

    template<typename T>
        auto operator*(const T& left, const vector2d& right) -> typename detail::if_integral_t<T, vector2d>
        {
            return { left * right.begin,
                     left * right.end };
        }

    template<typename T>
        auto operator*(const vector2d& left, const T& right) -> typename detail::if_integral_t<T, vector2d>
        {
            return { left.begin * right,
                     left.end * right };
        }
}
