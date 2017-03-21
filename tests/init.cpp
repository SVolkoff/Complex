#include <complex.hpp>
#include <catch.hpp>

SCENARIO("default constructor") {
	complex_t complex;
	REQUIRE(complex.real_() == 0);
	REQUIRE(complex.imaginary_() == 0);
}

SCENARIO("constructor with params") {
	complex_t complex(3, 4);
	REQUIRE(complex.real_() == 3);
	REQUIRE(complex.imaginary_() == 4);
}

SCENARIO("copy constructor") {
	complex_t complex(3, 4);
	complex_t copy(complex);
	REQUIRE(copy.real_() == 3);
	REQUIRE(copy.imaginary_() == 4);
}

SCENARIO("operator *") {
	complex_t c1(5, 4);
	complex_t c2(3, 2);
	complex_t c3(7, 22);
	REQUIRE((c1*c2)==c3);
}

SCENARIO("operator /") {
	complex_t c1(5, 4);
	complex_t c2(1, 2);
	complex_t c3(2.6, -1.2);
	REQUIRE((c1/c2)==c3);
}

SCENARIO("operator +=") {
	complex_t c1(4, 5); 
	complex_t c2(6, 7);
	complex_t c3(10, 12);
	REQUIRE((c1+=c2)==c3);
}

SCENARIO("operator -=") {
	complex_t c1(15, 10); 
	complex_t c2(5, -1);
	complex_t c3(10, 11);
	REQUIRE((c1-=c2)==c3);
}

SCENARIO("operator *=") {
	complex_t c1(5, 4); 
	complex_t c2(3, 2);
	complex_t c3(7, 22);
	REQUIRE((c1*=c2)==c3);
}

SCENARIO("operator /=") {
	complex_t c1(5, 4);
	complex_t c2(1, 2);
	complex_t c3(2.6, -1.2);
	REQUIRE((c1/=c2)==c3);
}

SCENARIO("operator =") {
	complex_t c1(5, 6); 
	complex_t c2=c1;
	REQUIRE(c2==c1);
}

SCENARIO("operator ==") {
	complex_t c1(5, 6); 
	complex_t c2(5, 6);
	REQUIRE(c1==c2);
}
