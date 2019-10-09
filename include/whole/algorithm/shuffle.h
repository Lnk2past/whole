#pragma once

#include <algorithm>

namespace whole
{
template< class Random, class URBG >
constexpr auto shuffle( Random &one, URBG&& g )
{
    return std::shuffle(std::begin(one), std::end(one), g);
}
}
