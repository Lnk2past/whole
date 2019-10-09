#pragma once

#include <algorithm>

namespace whole
{
template< class Population, class SampleIterator, class Distance, class URBG >
constexpr auto sample( Population &one, SampleIterator out, Distance n, URBG&& g )
{
    return std::sample(std::begin(one), std::end(one), out, n, g);
}
}
