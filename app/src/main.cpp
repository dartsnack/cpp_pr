#include <iostream>

#include <math/fib.hpp>
#include <math/fact.hpp>

int main()
{
    std::int32_t v = math::fact(10);
    std::cout << v << '\n';
}

