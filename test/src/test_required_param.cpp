/**
 *	@file	test_required_param.cpp
 *
 *	@brief	REQUIRED_PARAM のテスト
 *
 *	@author	myoukaku
 */

#include <cpp14_concepts.hpp>
#include <type_traits>
#include <utility>

namespace required_param_test
{

template <REQUIRED_PARAM(cpp14_concepts::integral, T)>
std::integral_constant<int, 1> f1(T);

template <REQUIRED_PARAM(cpp14_concepts::floating_point, T)>
std::integral_constant<int, 2> f1(T);

static_assert(std::is_same<std::integral_constant<int, 1>, decltype(f1(std::declval<int>()))>::value, "");
static_assert(std::is_same<std::integral_constant<int, 1>, decltype(f1(std::declval<unsigned int>()))>::value, "");
static_assert(std::is_same<std::integral_constant<int, 2>, decltype(f1(std::declval<float>()))>::value, "");
static_assert(std::is_same<std::integral_constant<int, 2>, decltype(f1(std::declval<double>()))>::value, "");

struct A
{
	A(int){}
};

struct B
{
	B(char*){}
};

struct C
{
	C(int, int){}
};

template <REQUIRED_PARAM(cpp14_concepts::constructible_from, int, T)>
std::integral_constant<int, 1> f2(T);

template <REQUIRED_PARAM(cpp14_concepts::constructible_from, char*, T)>
std::integral_constant<int, 2> f2(T);

template <REQUIRED_PARAM(cpp14_concepts::constructible_from, int, int, T)>
std::integral_constant<int, 3> f2(T);

static_assert(std::is_same<std::integral_constant<int, 1>, decltype(f2(std::declval<int>()))>::value, "");
static_assert(std::is_same<std::integral_constant<int, 1>, decltype(f2(std::declval<A>()))>::value, "");
static_assert(std::is_same<std::integral_constant<int, 2>, decltype(f2(std::declval<char*>()))>::value, "");
static_assert(std::is_same<std::integral_constant<int, 2>, decltype(f2(std::declval<B>()))>::value, "");
static_assert(std::is_same<std::integral_constant<int, 3>, decltype(f2(std::declval<C>()))>::value, "");

template <REQUIRED_PARAM(cpp14_concepts::integral, T)>
std::integral_constant<int, 1> f3_impl(T, cpp14_concepts::overload_priority<0>);

template <REQUIRED_PARAM(cpp14_concepts::unsigned_integral, T)>
std::integral_constant<int, 2> f3_impl(T, cpp14_concepts::overload_priority<1>);

template <typename T>
auto f3(T t) -> decltype(f3_impl(t, cpp14_concepts::overload_priority<1>{}));


static_assert(std::is_same<std::integral_constant<int, 1>, decltype(f3(std::declval<int>()))>::value, "");
static_assert(std::is_same<std::integral_constant<int, 2>, decltype(f3(std::declval<unsigned int>()))>::value, "");

}	// namespace required_param_test
