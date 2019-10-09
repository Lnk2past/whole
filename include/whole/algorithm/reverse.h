#pragma once

#include <algorithm>

namespace whole
{
template< class Bidir >
constexpr auto reverse( Bidir &one )
{
    return std::reverse(std::begin(one), std::end(one));
}

template< class Bidir, class OutputIt >
constexpr auto reverse_copy( Bidir &one, OutputIt d_first )
{
    return std::reverse_copy(std::begin(one), std::end(one), d_first);
}
}
