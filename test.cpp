#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Sums", "[functions][Sum]") {
    std::vector<int> a = {0,1,2};
    std::vector<int> b = {-1,0,1};
    REQUIRE(Sum(a) == 3);
    REQUIRE(Sum(b) == 0);
}

TEST_CASE("EvenMask","[functions][EvenMask]") {
    std::vector<int> a = {0,1,2,3,4};
    std::vector<int> b = {-2,-1,0,1,2};
    std::vector<int> c = {};
    REQUIRE(EvenMask(a) == std::vector<bool>{true,false,true,false,true});
    REQUIRE(EvenMask(b) == std::vector<bool>{true,false,true,false,true});
    REQUIRE(EvenMask(c) == std::vector<bool>{});
}