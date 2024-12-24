#include <iostream>

#include <math/fib.hpp>

int main()
{
    int32_t v1 = math::fib(46);
    int32_t v2 = math::fib(47);

    std::cout << v1 << '\n';
    std::cout << (v2 == math::badfib) << '\n';
}

