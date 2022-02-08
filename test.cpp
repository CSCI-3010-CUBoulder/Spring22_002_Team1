#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ( "Sign of int", "[sign]") {
  REQUIRE( Sign(0) == 1 );
  REQUIRE( Sign(1) == 1 );
  REQUIRE( Sign(-10) == -1 );
  REQUIRE( Sign(-1000000) == -1 );
  REQUIRE( Sign(100000) == 1 );
}

TEST_CASE("Product of vector", "[product]"){

	SECTION("checking with {1,2,3,4,5,6,7,8}"){
		std::vector<double> v{1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0};
		double testv1 = Product(v);

		REQUIRE(testv1 == 40320.0);
	}
}


TEST_CASE ( "Join vectors", "[join]") {
	std::vector<std::string> test{"This", "Is", "A", "Test"};

  	REQUIRE( Join(test, " ") == "This Is A Test" );
}

TEST_CASE("RemoveTwos", "[RemoveTwos]"){
	REQUIRE( RemoveTwos(16) == 1 );
}