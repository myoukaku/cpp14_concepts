/**
 *	@file	test_equality_comparable.cpp
 *
 *	@brief	equality_comparable のテスト
 *
 *	@author	myoukaku
 */

#include <cpp14_concepts.hpp>

namespace equality_comparable_test
{

static_assert( cpp14_concepts::equality_comparable<int>, "");
static_assert( cpp14_concepts::equality_comparable<int*>, "");
static_assert( cpp14_concepts::equality_comparable<int&>, "");
static_assert( cpp14_concepts::equality_comparable<int&&>, "");
static_assert( cpp14_concepts::equality_comparable<int[]>, "");
static_assert( cpp14_concepts::equality_comparable<int[2]>, "");
static_assert( cpp14_concepts::equality_comparable<const int>, "");
static_assert( cpp14_concepts::equality_comparable<const int*>, "");
static_assert( cpp14_concepts::equality_comparable<const int&>, "");
static_assert( cpp14_concepts::equality_comparable<const int&&>, "");
static_assert( cpp14_concepts::equality_comparable<const int[]>, "");
static_assert( cpp14_concepts::equality_comparable<const int[2]>, "");
static_assert( cpp14_concepts::equality_comparable<int()>, "");
static_assert( cpp14_concepts::equality_comparable<int(*)()>, "");
static_assert( cpp14_concepts::equality_comparable<int(&)()>, "");

static_assert( cpp14_concepts::equality_comparable<float>, "");
static_assert( cpp14_concepts::equality_comparable<char>, "");
static_assert( cpp14_concepts::equality_comparable<unsigned int>, "");

static_assert(!cpp14_concepts::equality_comparable<void>, "");
static_assert( cpp14_concepts::equality_comparable<void*>, "");

enum Enum {};
enum class EnumClass {};
struct Struct {};
union Union {};

static_assert( cpp14_concepts::equality_comparable<Enum>, "");
static_assert( cpp14_concepts::equality_comparable<EnumClass>, "");
static_assert(!cpp14_concepts::equality_comparable<Struct>, "");
static_assert(!cpp14_concepts::equality_comparable<Union>, "");

struct A
{
	friend bool operator==(const A&, const A&);
	friend bool operator!=(const A&, const A&);
};
struct B
{
	friend bool operator==(const B&, const B&) = delete;
	friend bool operator!=(const B&, const B&);
};
struct C
{
	friend bool operator==(const C&, const C&);
	friend bool operator!=(const C&, const C&) = delete;
};

static_assert( cpp14_concepts::equality_comparable<A>, "");
static_assert(!cpp14_concepts::equality_comparable<B>, "");
static_assert(!cpp14_concepts::equality_comparable<C>, "");

}	// namespace equality_comparable_test
