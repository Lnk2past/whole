#pragma once

#include <algorithm>

namespace whole
{
template< class Forward, class T >
constexpr auto fill( Forward &one, const T& value )
{
    return std::fill(std::begin(one), std::end(one), value);
}

template< class Forward, class Size, class T >
constexpr auto fill_n( Forward &one, Size count, const T& value )
{
    return std::fill_n(std::begin(one), count, value);
}
}
