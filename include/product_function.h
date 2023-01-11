#ifndef P3PRIMITIVERECURSIVEFUNCTIONS_PRODUCT_FUNCTION_H_
#define P3PRIMITIVERECURSIVEFUNCTIONS_PRODUCT_FUNCTION_H_

#include "add_function.h"
#include "combination_operation.h"
#include "composition_operation.h"
#include "primitive_recursion_operation.h"
#include "primitive_recursive_function.h"
#include "projection_function.h"
#include "zero_function.h"

namespace cc {

class ProductFunction : public PrimitiveRecursiveFunction {
 public:
  static PRFPtr Make();

  std::vector<int> Evaluate(const std::vector<int>& args) const override;
};

}  // namespace cc

#endif  // P3PRIMITIVERECURSIVEFUNCTIONS_PRODUCT_FUNCTION_H_
