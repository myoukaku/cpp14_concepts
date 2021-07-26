/**
 *	@file	test_convertible_to.cpp
 *
 *	@brief	convertible_to のテスト
 *
 *	@author	myoukaku
 */

#include <cpp14_concepts.hpp>

namespace convertible_to_test
{

static_assert( cpp14_concepts::convertible_to<int, int>, "");
static_assert(!cpp14_concepts::convertible_to<int, int*>, "");
static_assert(!cpp14_concepts::convertible_to<int, int&>, "");
static_assert( cpp14_concepts::convertible_to<int, int&&>, "");
static_assert(!cpp14_concepts::convertible_to<int, int[]>, "");
static_assert(!cpp14_concepts::convertible_to<int, int[2]>, "");
static_assert( cpp14_concepts::convertible_to<int, const int>, "");
static_assert(!cpp14_concepts::convertible_to<int, const int*>, "");
static_assert( cpp14_concepts::convertible_to<int, const int&>, "");
static_assert( cpp14_concepts::convertible_to<int, const int&&>, "");
static_assert(!cpp14_concepts::convertible_to<int, const int[]>, "");
static_assert(!cpp14_concepts::convertible_to<int, const int[2]>, "");

static_assert(!cpp14_concepts::convertible_to<int*, int>, "");
static_assert( cpp14_concepts::convertible_to<int*, int*>, "");
static_assert(!cpp14_concepts::convertible_to<int*, int&>, "");
static_assert(!cpp14_concepts::convertible_to<int*, int&&>, "");
static_assert(!cpp14_concepts::convertible_to<int*, int[]>, "");
static_assert(!cpp14_concepts::convertible_to<int*, int[2]>, "");
static_assert(!cpp14_concepts::convertible_to<int*, const int>, "");
static_assert( cpp14_concepts::convertible_to<int*, const int*>, "");
static_assert(!cpp14_concepts::convertible_to<int*, const int&>, "");
static_assert(!cpp14_concepts::convertible_to<int*, const int&&>, "");
static_assert(!cpp14_concepts::convertible_to<int*, const int[]>, "");
static_assert(!cpp14_concepts::convertible_to<int*, const int[2]>, "");

static_assert( cpp14_concepts::convertible_to<int&, int>, "");
static_assert(!cpp14_concepts::convertible_to<int&, int*>, "");
static_assert( cpp14_concepts::convertible_to<int&, int&>, "");
static_assert(!cpp14_concepts::convertible_to<int&, int&&>, "");
static_assert(!cpp14_concepts::convertible_to<int&, int[]>, "");
static_assert(!cpp14_concepts::convertible_to<int&, int[2]>, "");
static_assert( cpp14_concepts::convertible_to<int&, const int>, "");
static_assert(!cpp14_concepts::convertible_to<int&, const int*>, "");
static_assert( cpp14_concepts::convertible_to<int&, const int&>, "");
static_assert(!cpp14_concepts::convertible_to<int&, const int&&>, "");
static_assert(!cpp14_concepts::convertible_to<int&, const int[]>, "");
static_assert(!cpp14_concepts::convertible_to<int&, const int[2]>, "");

static_assert( cpp14_concepts::convertible_to<int&&, int>, "");
static_assert(!cpp14_concepts::convertible_to<int&&, int*>, "");
static_assert(!cpp14_concepts::convertible_to<int&&, int&>, "");
static_assert( cpp14_concepts::convertible_to<int&&, int&&>, "");
static_assert(!cpp14_concepts::convertible_to<int&&, int[]>, "");
static_assert(!cpp14_concepts::convertible_to<int&&, int[2]>, "");
static_assert( cpp14_concepts::convertible_to<int&&, const int>, "");
static_assert(!cpp14_concepts::convertible_to<int&&, const int*>, "");
static_assert( cpp14_concepts::convertible_to<int&&, const int&>, "");
static_assert( cpp14_concepts::convertible_to<int&&, const int&&>, "");
static_assert(!cpp14_concepts::convertible_to<int&&, const int[]>, "");
static_assert(!cpp14_concepts::convertible_to<int&&, const int[2]>, "");

static_assert(!cpp14_concepts::convertible_to<int[], int>, "");
static_assert( cpp14_concepts::convertible_to<int[], int*>, "");
static_assert(!cpp14_concepts::convertible_to<int[], int&>, "");
static_assert(!cpp14_concepts::convertible_to<int[], int&&>, "");
static_assert(!cpp14_concepts::convertible_to<int[], int[]>, "");
static_assert(!cpp14_concepts::convertible_to<int[], int[2]>, "");
static_assert(!cpp14_concepts::convertible_to<int[], const int>, "");
static_assert( cpp14_concepts::convertible_to<int[], const int*>, "");
static_assert(!cpp14_concepts::convertible_to<int[], const int&>, "");
static_assert(!cpp14_concepts::convertible_to<int[], const int&&>, "");
static_assert(!cpp14_concepts::convertible_to<int[], const int[]>, "");
static_assert(!cpp14_concepts::convertible_to<int[], const int[2]>, "");

static_assert(!cpp14_concepts::convertible_to<int[2], int>, "");
static_assert( cpp14_concepts::convertible_to<int[2], int*>, "");
static_assert(!cpp14_concepts::convertible_to<int[2], int&>, "");
static_assert(!cpp14_concepts::convertible_to<int[2], int&&>, "");
static_assert(!cpp14_concepts::convertible_to<int[2], int[]>, "");
static_assert(!cpp14_concepts::convertible_to<int[2], int[2]>, "");
static_assert(!cpp14_concepts::convertible_to<int[2], const int>, "");
static_assert( cpp14_concepts::convertible_to<int[2], const int*>, "");
static_assert(!cpp14_concepts::convertible_to<int[2], const int&>, "");
static_assert(!cpp14_concepts::convertible_to<int[2], const int&&>, "");
static_assert(!cpp14_concepts::convertible_to<int[2], const int[]>, "");
static_assert(!cpp14_concepts::convertible_to<int[2], const int[2]>, "");

static_assert( cpp14_concepts::convertible_to<const int, int>, "");
static_assert(!cpp14_concepts::convertible_to<const int, int*>, "");
static_assert(!cpp14_concepts::convertible_to<const int, int&>, "");
static_assert(!cpp14_concepts::convertible_to<const int, int&&>, "");
static_assert(!cpp14_concepts::convertible_to<const int, int[]>, "");
static_assert(!cpp14_concepts::convertible_to<const int, int[2]>, "");
static_assert( cpp14_concepts::convertible_to<const int, const int>, "");
static_assert(!cpp14_concepts::convertible_to<const int, const int*>, "");
static_assert( cpp14_concepts::convertible_to<const int, const int&>, "");
static_assert( cpp14_concepts::convertible_to<const int, const int&&>, "");
static_assert(!cpp14_concepts::convertible_to<const int, const int[]>, "");
static_assert(!cpp14_concepts::convertible_to<const int, const int[2]>, "");

static_assert(!cpp14_concepts::convertible_to<const int*, int>, "");
static_assert(!cpp14_concepts::convertible_to<const int*, int*>, "");
static_assert(!cpp14_concepts::convertible_to<const int*, int&>, "");
static_assert(!cpp14_concepts::convertible_to<const int*, int&&>, "");
static_assert(!cpp14_concepts::convertible_to<const int*, int[]>, "");
static_assert(!cpp14_concepts::convertible_to<const int*, int[2]>, "");
static_assert(!cpp14_concepts::convertible_to<const int*, const int>, "");
static_assert( cpp14_concepts::convertible_to<const int*, const int*>, "");
static_assert(!cpp14_concepts::convertible_to<const int*, const int&>, "");
static_assert(!cpp14_concepts::convertible_to<const int*, const int&&>, "");
static_assert(!cpp14_concepts::convertible_to<const int*, const int[]>, "");
static_assert(!cpp14_concepts::convertible_to<const int*, const int[2]>, "");

static_assert( cpp14_concepts::convertible_to<const int&, int>, "");
static_assert(!cpp14_concepts::convertible_to<const int&, int*>, "");
static_assert(!cpp14_concepts::convertible_to<const int&, int&>, "");
static_assert(!cpp14_concepts::convertible_to<const int&, int&&>, "");
static_assert(!cpp14_concepts::convertible_to<const int&, int[]>, "");
static_assert(!cpp14_concepts::convertible_to<const int&, int[2]>, "");
static_assert( cpp14_concepts::convertible_to<const int&, const int>, "");
static_assert(!cpp14_concepts::convertible_to<const int&, const int*>, "");
static_assert( cpp14_concepts::convertible_to<const int&, const int&>, "");
static_assert(!cpp14_concepts::convertible_to<const int&, const int&&>, "");
static_assert(!cpp14_concepts::convertible_to<const int&, const int[]>, "");
static_assert(!cpp14_concepts::convertible_to<const int&, const int[2]>, "");

static_assert( cpp14_concepts::convertible_to<const int&&, int>, "");
static_assert(!cpp14_concepts::convertible_to<const int&&, int*>, "");
static_assert(!cpp14_concepts::convertible_to<const int&&, int&>, "");
static_assert(!cpp14_concepts::convertible_to<const int&&, int&&>, "");
static_assert(!cpp14_concepts::convertible_to<const int&&, int[]>, "");
static_assert(!cpp14_concepts::convertible_to<const int&&, int[2]>, "");
static_assert( cpp14_concepts::convertible_to<const int&&, const int>, "");
static_assert(!cpp14_concepts::convertible_to<const int&&, const int*>, "");
static_assert( cpp14_concepts::convertible_to<const int&&, const int&>, "");
static_assert( cpp14_concepts::convertible_to<const int&&, const int&&>, "");
static_assert(!cpp14_concepts::convertible_to<const int&&, const int[]>, "");
static_assert(!cpp14_concepts::convertible_to<const int&&, const int[2]>, "");

static_assert(!cpp14_concepts::convertible_to<const int[], int>, "");
static_assert(!cpp14_concepts::convertible_to<const int[], int*>, "");
static_assert(!cpp14_concepts::convertible_to<const int[], int&>, "");
static_assert(!cpp14_concepts::convertible_to<const int[], int&&>, "");
static_assert(!cpp14_concepts::convertible_to<const int[], int[]>, "");
static_assert(!cpp14_concepts::convertible_to<const int[], int[2]>, "");
static_assert(!cpp14_concepts::convertible_to<const int[], const int>, "");
static_assert( cpp14_concepts::convertible_to<const int[], const int*>, "");
static_assert(!cpp14_concepts::convertible_to<const int[], const int&>, "");
static_assert(!cpp14_concepts::convertible_to<const int[], const int&&>, "");
static_assert(!cpp14_concepts::convertible_to<const int[], const int[]>, "");
static_assert(!cpp14_concepts::convertible_to<const int[], const int[2]>, "");

static_assert(!cpp14_concepts::convertible_to<const int[2], int>, "");
static_assert(!cpp14_concepts::convertible_to<const int[2], int*>, "");
static_assert(!cpp14_concepts::convertible_to<const int[2], int&>, "");
static_assert(!cpp14_concepts::convertible_to<const int[2], int&&>, "");
static_assert(!cpp14_concepts::convertible_to<const int[2], int[]>, "");
static_assert(!cpp14_concepts::convertible_to<const int[2], int[2]>, "");
static_assert(!cpp14_concepts::convertible_to<const int[2], const int>, "");
static_assert( cpp14_concepts::convertible_to<const int[2], const int*>, "");
static_assert(!cpp14_concepts::convertible_to<const int[2], const int&>, "");
static_assert(!cpp14_concepts::convertible_to<const int[2], const int&&>, "");
static_assert(!cpp14_concepts::convertible_to<const int[2], const int[]>, "");
static_assert(!cpp14_concepts::convertible_to<const int[2], const int[2]>, "");

struct A {};

static_assert( cpp14_concepts::convertible_to<A, A>, "");
static_assert( cpp14_concepts::convertible_to<A, const A>, "");
static_assert( cpp14_concepts::convertible_to<const A, A>, "");
static_assert( cpp14_concepts::convertible_to<const A, const A>, "");

struct B : A {};

static_assert(!cpp14_concepts::convertible_to<A, B>, "");
static_assert(!cpp14_concepts::convertible_to<A, B*>, "");
static_assert(!cpp14_concepts::convertible_to<A, B&>, "");
static_assert(!cpp14_concepts::convertible_to<A, B&&>, "");
static_assert(!cpp14_concepts::convertible_to<A, const B>, "");
static_assert(!cpp14_concepts::convertible_to<A, const B*>, "");
static_assert(!cpp14_concepts::convertible_to<A, const B&>, "");
static_assert(!cpp14_concepts::convertible_to<A, const B&&>, "");

static_assert( cpp14_concepts::convertible_to<B, A>, "");
static_assert(!cpp14_concepts::convertible_to<B, A*>, "");
static_assert(!cpp14_concepts::convertible_to<B, A&>, "");
static_assert( cpp14_concepts::convertible_to<B, A&&>, "");
static_assert( cpp14_concepts::convertible_to<B, const A>, "");
static_assert(!cpp14_concepts::convertible_to<B, const A*>, "");
static_assert( cpp14_concepts::convertible_to<B, const A&>, "");
static_assert( cpp14_concepts::convertible_to<B, const A&&>, "");

static_assert(!cpp14_concepts::convertible_to<B*, A>, "");
static_assert( cpp14_concepts::convertible_to<B*, A*>, "");
static_assert(!cpp14_concepts::convertible_to<B*, A&>, "");
static_assert(!cpp14_concepts::convertible_to<B*, A&&>, "");
static_assert(!cpp14_concepts::convertible_to<B*, const A>, "");
static_assert( cpp14_concepts::convertible_to<B*, const A*>, "");
static_assert(!cpp14_concepts::convertible_to<B*, const A&>, "");
static_assert(!cpp14_concepts::convertible_to<B*, const A&&>, "");

static_assert( cpp14_concepts::convertible_to<B&, A>, "");
static_assert(!cpp14_concepts::convertible_to<B&, A*>, "");
static_assert( cpp14_concepts::convertible_to<B&, A&>, "");
static_assert(!cpp14_concepts::convertible_to<B&, A&&>, "");
static_assert( cpp14_concepts::convertible_to<B&, const A>, "");
static_assert(!cpp14_concepts::convertible_to<B&, const A*>, "");
static_assert( cpp14_concepts::convertible_to<B&, const A&>, "");
static_assert(!cpp14_concepts::convertible_to<B&, const A&&>, "");

static_assert( cpp14_concepts::convertible_to<B&&, A>, "");
static_assert(!cpp14_concepts::convertible_to<B&&, A*>, "");
static_assert(!cpp14_concepts::convertible_to<B&&, A&>, "");
static_assert( cpp14_concepts::convertible_to<B&&, A&&>, "");
static_assert( cpp14_concepts::convertible_to<B&&, const A>, "");
static_assert(!cpp14_concepts::convertible_to<B&&, const A*>, "");
static_assert( cpp14_concepts::convertible_to<B&&, const A&>, "");
static_assert( cpp14_concepts::convertible_to<B&&, const A&&>, "");

static_assert( cpp14_concepts::convertible_to<const B, A>, "");
static_assert(!cpp14_concepts::convertible_to<const B, A*>, "");
static_assert(!cpp14_concepts::convertible_to<const B, A&>, "");
static_assert(!cpp14_concepts::convertible_to<const B, A&&>, "");
static_assert( cpp14_concepts::convertible_to<const B, const A>, "");
static_assert(!cpp14_concepts::convertible_to<const B, const A*>, "");
static_assert( cpp14_concepts::convertible_to<const B, const A&>, "");
static_assert( cpp14_concepts::convertible_to<const B, const A&&>, "");

static_assert(!cpp14_concepts::convertible_to<const B*, A>, "");
static_assert(!cpp14_concepts::convertible_to<const B*, A*>, "");
static_assert(!cpp14_concepts::convertible_to<const B*, A&>, "");
static_assert(!cpp14_concepts::convertible_to<const B*, A&&>, "");
static_assert(!cpp14_concepts::convertible_to<const B*, const A>, "");
static_assert( cpp14_concepts::convertible_to<const B*, const A*>, "");
static_assert(!cpp14_concepts::convertible_to<const B*, const A&>, "");
static_assert(!cpp14_concepts::convertible_to<const B*, const A&&>, "");

static_assert( cpp14_concepts::convertible_to<const B&, A>, "");
static_assert(!cpp14_concepts::convertible_to<const B&, A*>, "");
static_assert(!cpp14_concepts::convertible_to<const B&, A&>, "");
static_assert(!cpp14_concepts::convertible_to<const B&, A&&>, "");
static_assert( cpp14_concepts::convertible_to<const B&, const A>, "");
static_assert(!cpp14_concepts::convertible_to<const B&, const A*>, "");
static_assert( cpp14_concepts::convertible_to<const B&, const A&>, "");
static_assert(!cpp14_concepts::convertible_to<const B&, const A&&>, "");

static_assert( cpp14_concepts::convertible_to<const B&&, A>, "");
static_assert(!cpp14_concepts::convertible_to<const B&&, A*>, "");
static_assert(!cpp14_concepts::convertible_to<const B&&, A&>, "");
static_assert(!cpp14_concepts::convertible_to<const B&&, A&&>, "");
static_assert( cpp14_concepts::convertible_to<const B&&, const A>, "");
static_assert(!cpp14_concepts::convertible_to<const B&&, const A*>, "");
static_assert( cpp14_concepts::convertible_to<const B&&, const A&>, "");
static_assert( cpp14_concepts::convertible_to<const B&&, const A&&>, "");

struct C : private A {};

static_assert(!cpp14_concepts::convertible_to<A, C>, "");
static_assert(!cpp14_concepts::convertible_to<C, A>, "");

struct D : A {};
struct E : B, D {};

static_assert(!cpp14_concepts::convertible_to<A, E>, "");
static_assert(!cpp14_concepts::convertible_to<E, A>, "");

struct F
{
	F(A) {}
	F(C&&) {}
};
static_assert( cpp14_concepts::convertible_to<A, F>, "");
static_assert( cpp14_concepts::convertible_to<const A, F>, "");
static_assert( cpp14_concepts::convertible_to<C, F>, "");
static_assert(!cpp14_concepts::convertible_to<C&, F>, "");
static_assert(!cpp14_concepts::convertible_to<const C, F>, "");

struct G
{
	operator int() const;
};
static_assert( cpp14_concepts::convertible_to<G, int>, "");
static_assert(!cpp14_concepts::convertible_to<int, G>, "");
static_assert( cpp14_concepts::convertible_to<G&, int>, "");
static_assert( cpp14_concepts::convertible_to<G&&, int>, "");
static_assert(!cpp14_concepts::convertible_to<G*, int>, "");
static_assert(!cpp14_concepts::convertible_to<G, int&>, "");

struct H
{
	explicit operator int() const;
};
static_assert(!cpp14_concepts::convertible_to<H, int>, "");
static_assert(!cpp14_concepts::convertible_to<int, H>, "");
static_assert(!cpp14_concepts::convertible_to<H&, int>, "");
static_assert(!cpp14_concepts::convertible_to<H&&, int>, "");
static_assert(!cpp14_concepts::convertible_to<H*, int>, "");

struct From;
struct To {
	explicit To(From) = delete;
};
struct From {
	operator To();
};
static_assert(!cpp14_concepts::convertible_to<From, To>, "");
static_assert( std::is_convertible<From, To>::value, "");

}	// namespace convertible_to_test
