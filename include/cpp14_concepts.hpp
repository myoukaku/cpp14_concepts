﻿/**
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

}	// namespace cpp14_concepts

#else

#include <type_traits>

namespace cpp14_concepts
{

template <typename T, typename U>
constexpr bool same_as = std::is_same<T, U>::value;

}	// namespace cpp14_concepts

#endif

#endif // CPP14_CONCEPTS_HPP_INCLUDED
