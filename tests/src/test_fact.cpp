#include <catch2/catch_all.hpp>
#include <math/fact.hpp>

TEST_CASE("Factorial")
{
    std::int32_t out_of_range = math::fact(-100);

    SECTION("Only values in certain range are accepted")
    {
	REQUIRE(out_of_range == math::badfact);
    }

    SECTION("Correct factorial calculation")
    {
	REQUIRE(1*2*3*4*5 == math::fact(5));
	REQUIRE(1*2*3*4 == math::fact(4));
	REQUIRE(1*2*3 == math::fact(3));
	REQUIRE(1*2 == math::fact(2));
	REQUIRE(1 == math::fact(1));
	REQUIRE(1 == math::fact(0));
    }
}

