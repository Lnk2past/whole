#pragma once

#include <numeric>

namespace whole
{
template< class Input, class InputIt, class T >
auto inner_product( Input &one, InputIt first2, T init )
{
    return std::inner_product(std::begin(one), std::end(one), first2, init);
}

template< class Input, class InputIt, class T, class BinaryOperation1, class BinaryOperation2 >
auto inner_product( Input &one, InputIt first2, T init, BinaryOperation1 op1, BinaryOperation2 op2 )
{
    return std::inner_product(std::begin(one), std::end(one), first2, init, op1, op2);
}

}
