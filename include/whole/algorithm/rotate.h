#pragma once

#include <algorithm>

namespace whole
{
template< class Forward, class ForwardIt >
constexpr auto rotate( Forward &one, ForwardIt n_first, ForwardIt last )
{
    return std::rotate(std::begin(one), n_first, last);
}

template< class Forward, class ForwardIt, class OutputIt >
constexpr auto rotate_copy( Forward &one, ForwardIt n_first, ForwardIt last, OutputIt d_first )
{
    return std::rotate_copy(std::begin(one), n_first, last, d_first);
}
}
