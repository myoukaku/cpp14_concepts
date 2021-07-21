/**
 *	@file	test_signed_integral.cpp
 *
 *	@brief	signed_integral のテスト
 *
 *	@author	myoukaku
 */

#include <cpp14_concepts.hpp>

namespace signed_integral_test
{

static_assert(cpp14_concepts::signed_integral<signed char>    == true, "");
static_assert(cpp14_concepts::signed_integral<signed short>   == true, "");
static_assert(cpp14_concepts::signed_integral<signed int>     == true, "");
static_assert(cpp14_concepts::signed_integral<signed long>    == true, "");
static_assert(cpp14_concepts::signed_integral<unsigned char>  == false, "");
static_assert(cpp14_concepts::signed_integral<unsigned short> == false, "");
static_assert(cpp14_concepts::signed_integral<unsigned int>   == false, "");
static_assert(cpp14_concepts::signed_integral<unsigned long>  == false, "");
static_assert(cpp14_concepts::signed_integral<float>          == false, "");
static_assert(cpp14_concepts::signed_integral<double>         == false, "");

static_assert(cpp14_concepts::signed_integral<const signed char>    == true, "");
static_assert(cpp14_concepts::signed_integral<const signed short>   == true, "");
static_assert(cpp14_concepts::signed_integral<const signed int>     == true, "");
static_assert(cpp14_concepts::signed_integral<const signed long>    == true, "");
static_assert(cpp14_concepts::signed_integral<const unsigned char>  == false, "");
static_assert(cpp14_concepts::signed_integral<const unsigned short> == false, "");
static_assert(cpp14_concepts::signed_integral<const unsigned int>   == false, "");
static_assert(cpp14_concepts::signed_integral<const unsigned long>  == false, "");
static_assert(cpp14_concepts::signed_integral<const float>          == false, "");
static_assert(cpp14_concepts::signed_integral<const double>         == false, "");

static_assert(cpp14_concepts::signed_integral<void>  == false, "");
static_assert(cpp14_concepts::signed_integral<int*>  == false, "");
static_assert(cpp14_concepts::signed_integral<int&>  == false, "");
static_assert(cpp14_concepts::signed_integral<int&&> == false, "");

}	// namespace signed_integral_test
