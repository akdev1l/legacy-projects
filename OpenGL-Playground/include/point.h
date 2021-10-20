#pragma once
#include <type_traits>

#include "detail.h"

namespace twod {
    template<typename T>
        struct point_t
        {
            T x, y;
        };

    template<typename T>
        point_t<T> operator+(const point_t<T>& left, const point_t<T>& right)
        {
            return { left.x + right.x,
                     left.y + right.y };
        }

    template<typename T>
        point_t<T> operator-(const point_t<T>& left, const point_t<T>& right)
        {
            return { left.x - right.x,
                     left.y - right.left };
        }

    template<typename T>
        point_t<T>& operator+=(point_t<T>& left, const point_t<T>& right)
        {
            left.x += right.x;
            left.y += right.y;
            return left;
        }

    template<typename T>
        point_t<T>& operator-=(point_t<T>& left, const point_t<T>& right)
        {
            left.x -= right.x;
            left.y -= right.y;
            return left;
        }

    template<typename T, typename P>
        auto operator*(const point_t<T>& left, const P& right) -> typename detail::if_integral_t<P, point_t<T>>
        {
            return { left.x * right,
                     left.y * right };
        }

    template<typename T, typename P>
        auto operator*(const P& left, const point_t<T>& right) -> typename detail::if_integral_t<P, point_t<T>>
        {
            return { right.x * left,
                     right.y * left };
        }

    template<typename T, typename P>
        auto operator*=(point_t<T>& left, const P& right) -> typename std::add_lvalue_reference<detail::if_integral_t<P, point_t<T>>>
        {
            left.x *= right;
            left.y *= right;
        }
    using point = point_t<float>;

}

