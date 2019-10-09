#pragma once

#include <algorithm>

namespace whole
{
template< class Forward, class ForwardIt2 >
constexpr auto search( Forward &one, ForwardIt2 s_first, ForwardIt2 s_last )
{
    return std::search(std::begin(one), std::end(one), s_first, s_last);
}

template< class Forward, class ForwardIt2, class BinaryPredicate >
constexpr auto search( Forward &one, ForwardIt2 s_first, ForwardIt2 s_last, BinaryPredicate p )
{
    return std::search(std::begin(one), std::end(one), s_first, s_last, p);
}

template< class Forward, class Searcher >
constexpr auto search( Forward &one, const Searcher& searcher )
{
    return std::search(std::begin(one), std::end(one), searcher);
}

template< class Forward, class Size, class T >
constexpr auto search_n( Forward &one, Size count, const T& value )
{
    return std::search_n(std::begin(one), std::end(one), count, value);
}

template< class Forward, class Size, class T, class BinaryPredicate >
constexpr auto search_n( Forward &one, Size count, const T& value, BinaryPredicate p )
{
    return std::search_n(std::begin(one), std::end(one), count, value, p);
}

}
