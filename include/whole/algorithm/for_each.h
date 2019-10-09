#pragma once

#include <algorithm>

namespace whole
{
template< class Input, class UnaryFunction >
constexpr auto for_each( Input &first, UnaryFunction f )
{
    return std::for_each(std::begin(one), std::end(one), f);
}

template< class Input, class Size, class UnaryFunction >
constexpr auto for_each_n( Input &first, Size n, UnaryFunction f )
{
    return std::for_each_n(std::begin(one), n, f);
}
}
