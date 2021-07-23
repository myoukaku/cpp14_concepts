/**
 *	@file	cpp14_concepts.hpp
 *
 *	@brief	
 *
 *	@author	myoukaku
 */

#ifndef CPP14_CONCEPTS_HPP_INCLUDED
#define CPP14_CONCEPTS_HPP_INCLUDED

#define PP_JOIN(X, Y) PP_DO_JOIN(X, Y)
#define PP_DO_JOIN(X, Y) PP_DO_JOIN2(X,Y)
#define PP_DO_JOIN2(X, Y) X##Y

#define PP_EXPAND(x) x

#define PP_VA_ARG_COUNT(...) PP_EXPAND(PP_VA_ARG_DO_COUNT(__VA_ARGS__, 9,8,7,6,5,4,3,2,1,0))
#define PP_VA_ARG_DO_COUNT(_1,_2,_3,_4,_5,_6,_7,_8,_9,N,...) N

#define REQUIRED_PARAM(C, ...)		PP_EXPAND(PP_JOIN(REQUIRED_PARAM_, PP_VA_ARG_COUNT(__VA_ARGS__))(C, __VA_ARGS__))

#if defined(__cpp_concepts) && (__cpp_concepts >= 201907)

#include <concepts>

#define REQUIRED_PARAM_1(C, T)		C T
#define REQUIRED_PARAM_2(C, T1, T2)	C<T1> T2
#define REQUIRED_PARAM_3(C, T1, T2, T3)	C<T1, T2> T3

namespace cpp14_concepts
{

using std::same_as;
using std::derived_from;
using std::integral;
using std::signed_integral;
using std::unsigned_integral;
using std::floating_point;
using std::destructible;
using std::constructible_from;

}	// namespace cpp14_concepts

#else

#include <type_traits>

#define REQUIRED_PARAM_1(C, T)		typename T, std::enable_if_t<C<T>>* = nullptr
#define REQUIRED_PARAM_2(C, T1, T2)	typename T2, std::enable_if_t<C<T2, T1>>* = nullptr
#define REQUIRED_PARAM_3(C, T1, T2, T3)	typename T3, std::enable_if_t<C<T3, T1, T2>>* = nullptr

namespace cpp14_concepts
{

template <typename T, typename U>
constexpr bool same_as = std::is_same<T, U>::value;

template <typename Derived, typename Base>
constexpr bool derived_from =
	std::is_base_of<Base, Derived>::value &&
	std::is_convertible<const volatile Derived*, const volatile Base*>::value;

template <typename T>
constexpr bool integral = std::is_integral<T>::value;

template <typename T>
constexpr bool signed_integral = integral<T> && std::is_signed<T>::value;

template <typename T>
constexpr bool unsigned_integral = integral<T> && !signed_integral<T>;

template <typename T>
constexpr bool floating_point = std::is_floating_point<T>::value;

template <typename T>
constexpr bool destructible = std::is_nothrow_destructible<T>::value;

template <typename T, typename... Args>
constexpr bool constructible_from =
	destructible<T> && std::is_constructible<T, Args...>::value;

}	// namespace cpp14_concepts

#endif

#include <cstddef>

namespace cpp14_concepts
{

template <std::size_t N>
struct overload_priority : public overload_priority<N - 1>
{};

template <>
struct overload_priority<0>
{};

}	// namespace cpp14_concepts

#endif // CPP14_CONCEPTS_HPP_INCLUDED
