#pragma once

#include <algorithm>

namespace whole
{
template< class Input, class OutputIt >
constexpr auto copy( Input &one, OutputIt d_first )
{
    return std::copy(std::begin(one), std::end(one), d_first);
}

template< class Input, class OutputIt, class UnaryPredicate >
constexpr auto copy_if( Input &one, OutputIt d_first, UnaryPredicate pred )
{
    return std::copy_if(std::begin(one), std::end(one), d_first, pred);
}

template< class Input, class Size, class OutputIt >
constexpr auto copy_n( Input &one, Size count, OutputIt result )
{
    return std::copy_n(std::begin(one), count, result);
}

template< class Bidir, class BidirIt2 >
constexpr auto copy_backward( Bidir &one, BidirIt2 d_last )
{
    return std::copy_backward(std::begin(one), std::end(one), d_last);
}
}
