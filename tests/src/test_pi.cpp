#include <catch2/catch_all.hpp>
#include <math/pi_constant.hpp>

TEST_CASE("PI")
{
    REQUIRE(math::pi_constant<float>() == 3.1415927f);
    REQUIRE(math::pi_constant<double>() == 3.1415926535897931);
}

