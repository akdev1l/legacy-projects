#include "../include/vector2d.h"

namespace twod {
    vector2d operator+(const vector2d& left, const vector2d& right)
    {
        return { left.begin + right.begin,
                 left.end + right.end };
    }
    vector2d& operator+=(vector2d& left, const vector2d& right)
    {
        left.begin += right.begin;
        left.end += right.end;
        return left;
    }
    vector2d operator-(const vector2d& v)
    {
        return v;
    }

    vector2d& operator-=(vector2d& left, const vector2d& right)
    {
        left.begin -= right.begin;
        left.end -= right.end;
        return left;
    }
    
    std::size_t vector2d::length() const
    {
        return 0;
    }
}
