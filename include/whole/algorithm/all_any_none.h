#pragma once

#include <algorithm>

namespace whole
{
template< class Input, class UnaryPredicate >
constexpr auto all_of( Input &one, UnaryPredicate p )
{
    return std::all_of(std::begin(one), std::end(one), p);
}

template< class Input, class UnaryPredicate >
constexpr auto any_of( Input &one, UnaryPredicate p )
{
    return std::any_of(std::begin(one), std::end(one), p);
}

template< class Input, class UnaryPredicate >
constexpr auto none_of( Input &one, UnaryPredicate p )
{
    return std::none_of(std::begin(one), std::end(one), p);
}
}
