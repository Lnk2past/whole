#pragma once

#include <algorithm>

namespace whole
{
template< class Forward >
constexpr auto unique( Forward &one )
{
    return std::unique(std::begin(one), std::end(one));
}

template< class Forward, class BinaryPredicate >
constexpr auto unique( Forward &one, BinaryPredicate p )
{
    return std::unique(std::begin(one), std::end(one), p);
}

template< class Input, class OutputIt >
constexpr auto unique_copy( Forward &one, OutputIt d_first )
{
    return std::unique_copy(std::begin(one), std::end(one), d_first);
}

template< class Input, class OutputIt, class BinaryPredicate >
constexpr auto unique_copy( Forward &one, OutputIt d_first, BinaryPredicate p )
{
    return std::unique_copy(std::begin(one), std::end(one), d_first, p);
}
}
