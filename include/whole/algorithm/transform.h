#pragma once

#include <algorithm>

namespace whole
{
template< class Input, class OutputIt, class UnaryOperation >
constexpr auto transform( Input &one, OutputIt d_first, UnaryOperation unary_op )
{
    return std::transform(std::begin(one), std::end(one), d_first, unary_op);
}

template< class Input1, class Input2, class OutputIt, class BinaryOperation >
constexpr auto transform( Input1 &one, Input2 &two, OutputIt d_first, BinaryOperation binary_op )
{
    return std::transform(std::begin(one), std::end(one), std::begin(two), d_first, unary_op);
}
}
