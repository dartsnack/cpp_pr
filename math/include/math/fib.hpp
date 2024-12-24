#pragma once

#include <cstdint>

namespace math
{
    /// The `fib` function failure return value.
    inline constexpr int32_t badfib = -1;

    /**
     * @brief Calculates the Fibonacci sequence (n-1)`th number.
     *
     * Uses recursion for its calculation, optimized by caching an already
     * calculated value.
     * It is reasonable to support only first 45 numbers, since higher values
     * might cause `int32_t` arithmetic overflow.
     *
     * @param n Index of the Fibonacci sequence number. Must be less than 46.
     * 
     * @return The (n-1)'th Fibonacci sequence number.
     * @return `badfib` on failure.
     */
    int32_t fib(int32_t n);
}

