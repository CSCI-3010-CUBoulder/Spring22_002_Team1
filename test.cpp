#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
>>>>>>> origin/main
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

TEST_CASE ( "Sign of int", "[sign]") {
  REQUIRE( Sign(0) == 1 );
  REQUIRE( Sign(1) == 1 );
  REQUIRE( Sign(-10) == -1 );
  REQUIRE( Sign(-1000000) == -1 );
  REQUIRE( Sign(100000) == 1 );
}

TEST_CASE("Sum of vector", "[sum]"){

	SECTION("checking with {1,2,3,5,6,7,8,10}"){
		std::vector<int> v{1,2,3,5,6,7,8,10};
		std::vector<int> unchanged{1,2,3,5,6,7,8,10};
		int testv1 = Sum(v);

		REQUIRE(testv1 == 42);
		REQUIRE( v == unchanged );
	}
}