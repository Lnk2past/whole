#pragma once

#include <algorithm>

namespace whole
{
template< class Input, class T >
constexpr auto count( Input &one, const T &value )
{
    return std::count(std::begin(one), std::end(one), value);
}

template< class Input, class UnaryPredicate >
constexpr auto count_if( Input &one, UnaryPredicate p )
{
    return std::count_if(std::begin(one), std::end(one), p);
}
}
