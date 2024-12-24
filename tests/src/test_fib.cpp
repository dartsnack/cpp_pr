#include <catch2/catch_all.hpp>
#include <math/fib.hpp>

TEST_CASE("Fibonacci sequence")
{
    std::int32_t try_negative = math::fib(-5);
    std::int32_t try_48th = math::fib(47);

    std::int32_t try_6th = math::fib(5);
    std::int32_t try_10th = math::fib(9);
    std::int32_t try_24th = math::fib(23);

    SECTION("Accept values that are in certain range only")
    {
	REQUIRE(math::badfib == try_negative);
	REQUIRE(math::badfib == try_48th);
    }

    SECTION("Desired output")
    {
	REQUIRE(try_6th == 5);
	REQUIRE(try_10th == 34);
	REQUIRE(try_24th == 28657);
    }
}

