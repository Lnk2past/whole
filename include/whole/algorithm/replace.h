#pragma once

#include <algorithm>

namespace whole
{
template< class Forward, class T >
constexpr auto replace( Forward &one, const T& old_value, const T& new_value )
{
    return std::replace(std::begin(one), std::end(one), old_value, new_value);
}

template< class Forward, class UnaryPredicate, class T >
constexpr auto replace_if( Forward &one, UnaryPredicate p, const T& new_value )
{
    return std::replace_if(std::begin(one), std::end(one), p, new_value);
}

template< class Input, class OutputIt, class T >
constexpr auto replace_copy( Input &one, OutputIt d_first, const T& old_value, const T& new_value )
{
    return std::replace_copy(std::begin(one), std::end(one), d_first, old_value, new_value);
}

template< class Input, class OutputIt, class UnaryPredicate >
constexpr auto replace_copy_if( Input &one, OutputIt d_first, UnaryPredicate p )
{
    return std::replace_copy_if(std::begin(one), std::end(one), d_first, p, new_value);
}
}
