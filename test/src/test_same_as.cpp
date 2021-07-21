/**
 *	@file	test_same_as.cpp
 *
 *	@brief	same_as のテスト
 *
 *	@author	myoukaku
 */

#include <cpp14_concepts.hpp>

namespace same_as_test
{

static_assert(cpp14_concepts::same_as<int, int>  == true, "");
static_assert(cpp14_concepts::same_as<int, long> == false, "");
static_assert(cpp14_concepts::same_as<int, char> == false, "");
static_assert(cpp14_concepts::same_as<int, int*> == false, "");
static_assert(cpp14_concepts::same_as<int, int&> == false, "");
static_assert(cpp14_concepts::same_as<int, int&&> == false, "");
static_assert(cpp14_concepts::same_as<int, const int> == false, "");

struct A {};
static_assert(cpp14_concepts::same_as<A, A> == true, "");

struct B : A {};
static_assert(cpp14_concepts::same_as<B, B> == true, "");
static_assert(cpp14_concepts::same_as<B, A> == false, "");

}	// namespace same_as_test
