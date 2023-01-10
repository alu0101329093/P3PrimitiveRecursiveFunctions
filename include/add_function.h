#ifndef P3PRIMITIVERECURSIVEFUNCTIONS_ADD_FUNCTION_H_
#define P3PRIMITIVERECURSIVEFUNCTIONS_ADD_FUNCTION_H_

#include "composition_operation.h"
#include "primitive_recursion_operation.h"
#include "primitive_recursive_function.h"
#include "projection_function.h"
#include "successor_function.h"

namespace cc {

class AddFunction : public PrimitiveRecursiveFunction {
 public:
  std::vector<int> Evaluate(const std::vector<int>& args) const override;
};

}  // namespace cc

#endif  // P3PRIMITIVERECURSIVEFUNCTIONS_ADD_FUNCTION_H_
