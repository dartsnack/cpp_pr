#include <iostream>

#include <math/fib.hpp>
#include <math/fact.hpp>
#include <math/pi_constant.hpp>

int main()
{
    std::cout << math::pi_constant<float>() << '\n'
	<< math::pi_constant<double>() << '\n';
}

