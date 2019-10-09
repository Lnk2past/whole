#pragma once

#include <algorithm>

namespace whole
{
template< class Input, class OutputIt >
constexpr auto move( Input &one, OutputIt d_first )
{
    return std::move(std::begin(one), std::end(one), d_first);
}

template< class Bidir, class BidirIt2 >
constexpr auto move_backward( Bidir &one, BidirIt2 d_last )
{
    return std::move_backward(std::begin(one), std::end(one), d_last);
}
}
