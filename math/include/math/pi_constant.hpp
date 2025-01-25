#pragma once

namespace math
{
    template<typename T>
    constexpr T pi_constant();

    template<>
    constexpr auto pi_constant<float>() -> float
    {
	return 3.1415927f;
    }

    template<>
    constexpr auto pi_constant<double>() -> double
    {
	return 3.1415926535897931;
    }
}

