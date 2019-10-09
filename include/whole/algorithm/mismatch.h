#pragma once

#include <algorithm>

namespace whole
{
template< class Input, class InputIt2 >
constexpr auto mismatch( Input &one, InputIt2 first2 )
{
    return std::mismatch(std::begin(one), std::end(one), first2);
}
}
