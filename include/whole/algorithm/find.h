#pragma once

#include <algorithm>

namespace whole
{
template< class Input, class T >
constexpr auto find( Input &one, const T& value )
{
    return std::find(std::begin(one), std::end(one), value);
}

template< class Input, class UnaryPredicate >
constexpr auto find_if( Input &one, UnaryPredicate p )
{
    return std::find_if(std::begin(one), std::end(one), p);
}

template< class Input, class UnaryPredicate >
constexpr auto find_if_not( Input &one, UnaryPredicate q )
{
    return std::find_if_not(std::begin(one), std::end(one), q);
}

template< class Forward1, class ForwardIt2 >
constexpr auto find_end( Forward1 &one, ForwardIt2 two1, ForwardIt2 two2 )
{
    return std::find_end(std::begin(one), std::end(one), two1, two2);
}

template< class Forward1, class ForwardIt2, class BinaryPredicate >
constexpr auto find_end( Forward1 &one, ForwardIt2 two1, ForwardIt2 two2, BinaryPredicate p )
{
    return std::find_end(std::begin(one), std::end(one), two1, two2, p);
}

template< class Input, class ForwardIt >
constexpr auto find_first_of( Input &one, ForwardIt s_first, ForwardIt s_last )
{
    return std::find_first_of(std::begin(one), std::end(one), s_first, s_last);
}

template< class Input, class ForwardIt, class BinaryPredicate >
constexpr auto find_first_of( Input &one, ForwardIt s_first, ForwardIt s_last, BinaryPredicate p )
{
    return std::find_first_of(std::begin(one), std::end(one), s_first, s_last, p);
}

template< class Forward >
constexpr auto adjacent_find( Forward &one )
{
    return std::adjacent_find(std::begin(one), std::end(one));
}

template< class Forward, class BinaryPredicate >
constexpr auto adjacent_find( Forward &one, BinaryPredicate p )
{
    return std::adjacent_find(std::begin(one), std::end(one), p);
}


}
