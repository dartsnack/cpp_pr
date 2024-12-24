#include "math/fib.hpp"

namespace math
{
    static constexpr std::int32_t fib_cache_size = 47;
    static std::int32_t fib_cache[fib_cache_size]{};

    std::int32_t fib(std::int32_t n)
    {
	if (n >= fib_cache_size || n < 0)
	{
	    return badfib;
	}

	if (0 == n || 1 == n)
	{
	    return n;
	}

	if (fib_cache[n])
	{
	    return fib_cache[n];
	}


	return fib_cache[n] = fib(n-1) + fib(n-2);
    }
}

