#ifndef PYTHONIC_INCLUDE_NUMPY_NEXTAFTER_HPP
#define PYTHONIC_INCLUDE_NUMPY_NEXTAFTER_HPP

#include "pythonic/include/utils/functor.hpp"
#include "pythonic/include/types/ndarray.hpp"
#include "pythonic/include/types/numpy_broadcast.hpp"
#include "pythonic/include/utils/numpy_traits.hpp"
#include <boost/simd/function/nextafter.hpp>

PYTHONIC_NS_BEGIN

namespace numpy
{
#define NUMPY_NARY_FUNC_NAME nextafter
#define NUMPY_NARY_FUNC_SYM boost::simd::nextafter
#include "pythonic/include/types/numpy_nary_expr.hpp"
}
PYTHONIC_NS_END

#endif
