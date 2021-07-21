/**
 *	@file	test_constructible_from.cpp
 *
 *	@brief	constructible_from のテスト
 *
 *	@author	myoukaku
 */

#include <cpp14_concepts.hpp>

namespace constructible_from_test
{

struct A
{
	A(int){}
	A(int, double){}
};

static_assert(cpp14_concepts::constructible_from<A, A> == true, "");
static_assert(cpp14_concepts::constructible_from<A, A&> == true, "");
static_assert(cpp14_concepts::constructible_from<A, A const&> == true, "");
static_assert(cpp14_concepts::constructible_from<A, A&&> == true, "");
static_assert(cpp14_concepts::constructible_from<A, A*> == false, "");
static_assert(cpp14_concepts::constructible_from<A, int> == true, "");
static_assert(cpp14_concepts::constructible_from<A, int, double> == true, "");
static_assert(cpp14_concepts::constructible_from<A, int, double, int> == false, "");

}	// namespace constructible_from_test
