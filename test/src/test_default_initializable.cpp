/**
 *	@file	test_default_initializable.cpp
 *
 *	@brief	default_initializable のテスト
 *
 *	@author	myoukaku
 */

#include <cpp14_concepts.hpp>

namespace default_initializable_test
{

static_assert( cpp14_concepts::default_initializable<int>, "");
static_assert( cpp14_concepts::default_initializable<int*>, "");
static_assert(!cpp14_concepts::default_initializable<int&>, "");
static_assert(!cpp14_concepts::default_initializable<int&&>, "");
static_assert(!cpp14_concepts::default_initializable<int[]>, "");
static_assert( cpp14_concepts::default_initializable<int[2]>, "");
static_assert(!cpp14_concepts::default_initializable<int()>, "");
static_assert( cpp14_concepts::default_initializable<int(*)()>, "");
static_assert(!cpp14_concepts::default_initializable<int(&)()>, "");

static_assert(!cpp14_concepts::default_initializable<const int>, "");
static_assert(!cpp14_concepts::default_initializable<const int[2]>, "");

static_assert(!cpp14_concepts::default_initializable<void>, "");
static_assert( cpp14_concepts::default_initializable<void*>, "");

enum Enum {};
enum class EC {};
struct S {};
union U {};

static_assert( cpp14_concepts::default_initializable<Enum>, "");
static_assert( cpp14_concepts::default_initializable<EC>, "");
static_assert( cpp14_concepts::default_initializable<S>, "");
static_assert( cpp14_concepts::default_initializable<U>, "");

struct A
{
	A() {}
};

struct B
{
	B(int = 0) {}
};

struct C
{
	C(int) {}
};

struct D
{
private:
	D() {}
};

struct E
{
	E() {}
private:
	~E() {}
};

struct F
{
	~F() noexcept(false) {}
};

struct G
{
	int i;
};

struct H
{
	int i[3];
};

struct I
{
	G g;
};

static_assert( cpp14_concepts::default_initializable<A>, "");
static_assert( cpp14_concepts::default_initializable<B>, "");
static_assert(!cpp14_concepts::default_initializable<C>, "");
static_assert(!cpp14_concepts::default_initializable<D>, "");
static_assert(!cpp14_concepts::default_initializable<F>, "");
static_assert( cpp14_concepts::default_initializable<G>, "");
static_assert( cpp14_concepts::default_initializable<H>, "");
static_assert( cpp14_concepts::default_initializable<I>, "");

}	// namespace default_initializable_test
