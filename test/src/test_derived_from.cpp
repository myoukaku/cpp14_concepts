/**
 *	@file	test_derived_from.cpp
 *
 *	@brief	derived_from のテスト
 *
 *	@author	myoukaku
 */

#include <cpp14_concepts.hpp>

namespace derived_from_test
{

class A {};
 
class B: public A {};
 
class C: private A{};

static_assert(cpp14_concepts::derived_from<A, A> == true, "");
static_assert(cpp14_concepts::derived_from<A, B> == false, "");
static_assert(cpp14_concepts::derived_from<A, C> == false, "");
static_assert(cpp14_concepts::derived_from<B, A> == true, "");
static_assert(cpp14_concepts::derived_from<B, B> == true, "");
static_assert(cpp14_concepts::derived_from<B, C> == false, "");
static_assert(cpp14_concepts::derived_from<C, A> == false, "");
static_assert(cpp14_concepts::derived_from<C, B> == false, "");
static_assert(cpp14_concepts::derived_from<C, C> == true, "");

static_assert(cpp14_concepts::derived_from<int, int> == false, "");
static_assert(cpp14_concepts::derived_from<float, float> == false, "");

}	// namespace derived_from_test
