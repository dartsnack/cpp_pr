#include "math/fact.hpp"

namespace math
{
    std::int32_t fact(std::int32_t x)
    {
	if (x < 0)
	{
	    return badfact;
	}

	if (x == 0)
	{
	    return 1;
	}

	std::int32_t f = 1;
	for (std::int32_t i = f + 1; i <= x; f *= i++);

	return f;
    }
}

