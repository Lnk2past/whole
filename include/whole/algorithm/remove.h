#pragma once

#include <algorithm>

namespace whole
{
template< class Forward, class T >
constexpr auto remove( Forward &one, const T& value )
{
    return std::remove(std::begin(one), std::end(one), value);
}

template< class Forward, class UnaryPredicate >
constexpr auto remove_if( Forward &one, UnaryPredicate p )
{
    return std::remove_if(std::begin(one), std::end(one), p);
}

template< class Input, class OutputIt, class T >
constexpr auto remove_copy( Input &one, OutputIt d_first, const T& value )
{
    return std::remove_copy(std::begin(one), std::end(one), d_first, value);
}

template< class Input, class OutputIt, class UnaryPredicate >
constexpr auto remove_copy_if( Input &one, OutputIt d_first, UnaryPredicate p )
{
    return std::remove_copy_if(std::begin(one), std::end(one), d_first, p);
}
}
