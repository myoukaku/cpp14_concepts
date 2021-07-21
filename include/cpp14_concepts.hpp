/**
 *	@file	cpp14_concepts.hpp
 *
 *	@brief	
 *
 *	@author	myoukaku
 */

#ifndef CPP14_CONCEPTS_HPP_INCLUDED
#define CPP14_CONCEPTS_HPP_INCLUDED

#if defined(__cpp_concepts) && (__cpp_concepts >= 201907)

#include <concepts>

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

#endif // CPP14_CONCEPTS_HPP_INCLUDED
