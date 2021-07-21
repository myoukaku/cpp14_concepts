/**
 *	@file	test_destructible.cpp
 *
 *	@brief	destructible のテスト
 *
 *	@author	myoukaku
 */

#include <cpp14_concepts.hpp>

namespace destructible_test
{

struct A
{
};

struct B
{
	~B() noexcept(true) {}
};

struct C
{
	~C() noexcept(false) {}
};

struct D
{
private:
	~D() noexcept(true) {}
};

struct E
{
private:
	~E() noexcept(false) {}
};

static_assert(cpp14_concepts::destructible<A> == true, "");
static_assert(cpp14_concepts::destructible<B> == true, "");
static_assert(cpp14_concepts::destructible<C> == false, "");
static_assert(cpp14_concepts::destructible<D> == false, "");
static_assert(cpp14_concepts::destructible<E> == false, "");

}	// namespace destructible_test
