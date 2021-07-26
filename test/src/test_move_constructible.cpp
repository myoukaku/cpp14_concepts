/**
 *	@file	test_move_constructible.cpp
 *
 *	@brief	move_constructible のテスト
 *
 *	@author	myoukaku
 */

#include <cpp14_concepts.hpp>

namespace move_constructible_test
{

static_assert( cpp14_concepts::move_constructible<int>, "");
static_assert( cpp14_concepts::move_constructible<int*>, "");
static_assert( cpp14_concepts::move_constructible<int&>, "");
static_assert( cpp14_concepts::move_constructible<int&&>, "");
static_assert(!cpp14_concepts::move_constructible<int[]>, "");
static_assert(!cpp14_concepts::move_constructible<int[2]>, "");
static_assert(!cpp14_concepts::move_constructible<int()>, "");
static_assert( cpp14_concepts::move_constructible<int(*)()>, "");
static_assert( cpp14_concepts::move_constructible<int(&)()>, "");

static_assert(!cpp14_concepts::move_constructible<void>, "");
static_assert( cpp14_concepts::move_constructible<void*>, "");

enum Enum {};
enum class EnumClass {};
struct Struct {};
union Union {};

static_assert( cpp14_concepts::move_constructible<Enum>, "");
static_assert( cpp14_concepts::move_constructible<EnumClass>, "");
static_assert( cpp14_concepts::move_constructible<Struct>, "");
static_assert( cpp14_concepts::move_constructible<Union>, "");

struct A
{
	A(const A&) {}
};

struct B
{
	B(const B&) = delete;
	B(B&&) {}
};

struct C
{
	C(C&&) = delete;
};

struct D
{
private:
	D(D&&) {}
};

struct E
{
	E& operator=(E&&){return *this;}
};

static_assert( cpp14_concepts::move_constructible<A>, "");
static_assert( cpp14_concepts::move_constructible<B>, "");
static_assert(!cpp14_concepts::move_constructible<C>, "");
static_assert(!cpp14_concepts::move_constructible<D>, "");
static_assert(!cpp14_concepts::move_constructible<E>, "");

}	// namespace move_constructible_test
