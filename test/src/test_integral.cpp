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

static_assert(cpp14_concepts::integral<int>  == true, "");
static_assert(cpp14_concepts::integral<const int> == true, "");
static_assert(cpp14_concepts::integral<long> == true, "");
static_assert(cpp14_concepts::integral<char> == true, "");
static_assert(cpp14_concepts::integral<int*> == false, "");
static_assert(cpp14_concepts::integral<int&> == false, "");
static_assert(cpp14_concepts::integral<int&&> == false, "");
static_assert(cpp14_concepts::integral<float> == false, "");

}	// namespace integral_test
