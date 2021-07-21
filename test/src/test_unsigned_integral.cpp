/**
 *	@file	test_unsigned_integral.cpp
 *
 *	@brief	unsigned_integral のテスト
 *
 *	@author	myoukaku
 */

#include <cpp14_concepts.hpp>

namespace integral_test
{

static_assert(cpp14_concepts::unsigned_integral<signed char>    == false, "");
static_assert(cpp14_concepts::unsigned_integral<signed short>   == false, "");
static_assert(cpp14_concepts::unsigned_integral<signed int>     == false, "");
static_assert(cpp14_concepts::unsigned_integral<signed long>    == false, "");
static_assert(cpp14_concepts::unsigned_integral<unsigned char>  == true, "");
static_assert(cpp14_concepts::unsigned_integral<unsigned short> == true, "");
static_assert(cpp14_concepts::unsigned_integral<unsigned int>   == true, "");
static_assert(cpp14_concepts::unsigned_integral<unsigned long>  == true, "");
static_assert(cpp14_concepts::unsigned_integral<float>          == false, "");
static_assert(cpp14_concepts::unsigned_integral<double>         == false, "");

static_assert(cpp14_concepts::unsigned_integral<const signed char>    == false, "");
static_assert(cpp14_concepts::unsigned_integral<const signed short>   == false, "");
static_assert(cpp14_concepts::unsigned_integral<const signed int>     == false, "");
static_assert(cpp14_concepts::unsigned_integral<const signed long>    == false, "");
static_assert(cpp14_concepts::unsigned_integral<const unsigned char>  == true, "");
static_assert(cpp14_concepts::unsigned_integral<const unsigned short> == true, "");
static_assert(cpp14_concepts::unsigned_integral<const unsigned int>   == true, "");
static_assert(cpp14_concepts::unsigned_integral<const unsigned long>  == true, "");
static_assert(cpp14_concepts::unsigned_integral<const float>          == false, "");
static_assert(cpp14_concepts::unsigned_integral<const double>         == false, "");

static_assert(cpp14_concepts::unsigned_integral<void>  == false, "");
static_assert(cpp14_concepts::unsigned_integral<int*>  == false, "");
static_assert(cpp14_concepts::unsigned_integral<int&>  == false, "");
static_assert(cpp14_concepts::unsigned_integral<int&&> == false, "");

}	// namespace integral_test
