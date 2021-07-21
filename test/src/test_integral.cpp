/**
 *	@file	test_integral.cpp
 *
 *	@brief	integral のテスト
 *
 *	@author	myoukaku
 */

#include <cpp14_concepts.hpp>

namespace integral_test
{

static_assert(cpp14_concepts::integral<signed char>    == true, "");
static_assert(cpp14_concepts::integral<signed short>   == true, "");
static_assert(cpp14_concepts::integral<signed int>     == true, "");
static_assert(cpp14_concepts::integral<signed long>    == true, "");
static_assert(cpp14_concepts::integral<unsigned char>  == true, "");
static_assert(cpp14_concepts::integral<unsigned short> == true, "");
static_assert(cpp14_concepts::integral<unsigned int>   == true, "");
static_assert(cpp14_concepts::integral<unsigned long>  == true, "");
static_assert(cpp14_concepts::integral<float>          == false, "");
static_assert(cpp14_concepts::integral<double>         == false, "");

static_assert(cpp14_concepts::integral<const signed char>    == true, "");
static_assert(cpp14_concepts::integral<const signed short>   == true, "");
static_assert(cpp14_concepts::integral<const signed int>     == true, "");
static_assert(cpp14_concepts::integral<const signed long>    == true, "");
static_assert(cpp14_concepts::integral<const unsigned char>  == true, "");
static_assert(cpp14_concepts::integral<const unsigned short> == true, "");
static_assert(cpp14_concepts::integral<const unsigned int>   == true, "");
static_assert(cpp14_concepts::integral<const unsigned long>  == true, "");
static_assert(cpp14_concepts::integral<const float>          == false, "");
static_assert(cpp14_concepts::integral<const double>         == false, "");

static_assert(cpp14_concepts::integral<void>  == false, "");
static_assert(cpp14_concepts::integral<int*>  == false, "");
static_assert(cpp14_concepts::integral<int&>  == false, "");
static_assert(cpp14_concepts::integral<int&&> == false, "");

}	// namespace integral_test
