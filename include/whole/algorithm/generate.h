#pragma once

#include <algorithm>

namespace whole
{
template< class Input, class Generator >
constexpr auto generate( Input &one, Generator g )
{
    std::generate(std::begin(one), std::end(one), g);
}

template< class Input, class Size, class Generator >
constexpr auto generate_n( Input &one, Size n, Generator g )
{
    std::generate_n(std::begin(one), n, g);
}
}
