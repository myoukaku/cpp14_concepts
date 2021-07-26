/**
 *	@file	test_copy_constructible.cpp
 *
 *	@brief	copy_constructible のテスト
 *
 *	@author	myoukaku
 */

#include <cpp14_concepts.hpp>

namespace copy_constructible_test
{

static_assert( cpp14_concepts::copy_constructible<int>, "");
static_assert( cpp14_concepts::copy_constructible<int*>, "");
static_assert( cpp14_concepts::copy_constructible<int&>, "");
static_assert(!cpp14_concepts::copy_constructible<int&&>, "");
static_assert(!cpp14_concepts::copy_constructible<int[]>, "");
static_assert(!cpp14_concepts::copy_constructible<int[2]>, "");
static_assert(!cpp14_concepts::copy_constructible<int()>, "");
static_assert( cpp14_concepts::copy_constructible<int(*)()>, "");
static_assert( cpp14_concepts::copy_constructible<int(&)()>, "");

static_assert(!cpp14_concepts::copy_constructible<void>, "");
static_assert( cpp14_concepts::copy_constructible<void*>, "");

enum Enum {};
enum class EnumClass {};
struct Struct {};
union Union {};

static_assert( cpp14_concepts::copy_constructible<Enum>, "");
static_assert( cpp14_concepts::copy_constructible<EnumClass>, "");
static_assert( cpp14_concepts::copy_constructible<Struct>, "");
static_assert( cpp14_concepts::copy_constructible<Union>, "");

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
	C(const C&) {}
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

static_assert( cpp14_concepts::copy_constructible<A>, "");
static_assert(!cpp14_concepts::copy_constructible<B>, "");
static_assert(!cpp14_concepts::copy_constructible<C>, "");
static_assert(!cpp14_concepts::copy_constructible<D>, "");
static_assert(!cpp14_concepts::copy_constructible<E>, "");

}	// namespace copy_constructible_test
