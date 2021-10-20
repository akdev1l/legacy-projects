#pragma once 

#include <type_traits>

namespace twod {
    /*! \Brief A helper class where implementation details live.
     *
     * This class contains the several helper typedefs and methods only used internally.
     */
    namespace detail {
        /*! \Brief Enable if the type T is integral
         *
         * SFINAE-enabler class that checks if the type T is integral or not
         */*
        template<typename IntT, typename T>
            using if_integral_t = typename std::enable_if_t<std::is_integral<IntT>::value, T>;
    }
}
