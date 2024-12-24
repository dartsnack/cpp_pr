#pragma once

#include <cstdint>

namespace math
{
    /// The `fib` function failure return value.
    inline constexpr std::int32_t badfact = -1;

    /*
     * @brief Calculate factorial.
     *
     * Uses iterative approach to calculate factorial of a number.
     * 
     * @param x A number whose factorial is to be calculated.
     *
     * @return Factorial of a number.
     * @return `badfact` on failure.
     */
    std::int32_t fact(std::int32_t x);
}

