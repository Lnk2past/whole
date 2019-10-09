#pragma once

#include <numeric>

namespace whole
{
template< class Input, class T >
auto accumulate( Input &one, T init )
{
    return std::accumulate(std::begin(one), std::end(one), init);
}

template< class Input, class T, class BinaryOperation >
auto accumulate( Input &one, T init, BinaryOperation op )
{
    return std::accumulate(std::begin(one), std::end(one), init, op);
}

}