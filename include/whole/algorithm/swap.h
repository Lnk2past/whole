#pragma once

#include <algorithm>

namespace whole
{
template< class Forward, class ForwardIt2 >
constexpr ForwardIt2 swap_ranges( Forward &one, ForwardIt2 first2 )
{
    return std::swap_ranges(std::begin(one), std::end(one), first2);
}
}