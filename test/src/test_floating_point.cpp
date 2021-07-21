/**
 *	@file	test_floating_point.cpp
 *
 *	@brief	floating_point のテスト
 *
 *	@author	myoukaku
 */

#include <cpp14_concepts.hpp>

namespace floating_point_test
{

static_assert(cpp14_concepts::floating_point<signed char>    == false, "");
static_assert(cpp14_concepts::floating_point<signed short>   == false, "");
static_assert(cpp14_concepts::floating_point<signed int>     == false, "");
static_assert(cpp14_concepts::floating_point<signed long>    == false, "");
static_assert(cpp14_concepts::floating_point<unsigned char>  == false, "");
static_assert(cpp14_concepts::floating_point<unsigned short> == false, "");
static_assert(cpp14_concepts::floating_point<unsigned int>   == false, "");
static_assert(cpp14_concepts::floating_point<unsigned long>  == false, "");
static_assert(cpp14_concepts::floating_point<float>          == true, "");
static_assert(cpp14_concepts::floating_point<double>         == true, "");

static_assert(cpp14_concepts::floating_point<const signed char>    == false, "");
static_assert(cpp14_concepts::floating_point<const signed short>   == false, "");
static_assert(cpp14_concepts::floating_point<const signed int>     == false, "");
static_assert(cpp14_concepts::floating_point<const signed long>    == false, "");
static_assert(cpp14_concepts::floating_point<const unsigned char>  == false, "");
static_assert(cpp14_concepts::floating_point<const unsigned short> == false, "");
static_assert(cpp14_concepts::floating_point<const unsigned int>   == false, "");
static_assert(cpp14_concepts::floating_point<const unsigned long>  == false, "");
static_assert(cpp14_concepts::floating_point<const float>          == true, "");
static_assert(cpp14_concepts::floating_point<const double>         == true, "");

static_assert(cpp14_concepts::floating_point<void>  == false, "");
static_assert(cpp14_concepts::floating_point<int*>  == false, "");
static_assert(cpp14_concepts::floating_point<int&>  == false, "");
static_assert(cpp14_concepts::floating_point<int&&> == false, "");

}	// namespace floating_point_test
