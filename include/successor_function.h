#ifndef P3PRIMITIVERECURSIVEFUNCTIONS_SUCCESSOR_FUNCTION_H_
#define P3PRIMITIVERECURSIVEFUNCTIONS_SUCCESSOR_FUNCTION_H_

#include "primitive_recursive_function.h"

namespace cc {

class SuccessorFunction : public PrimitiveRecursiveFunction {
 public:
  std::vector<int> evaluate(const std::vector<int>& args) override;
};

}  // namespace cc

#endif  // P3PRIMITIVERECURSIVEFUNCTIONS_SUCCESSOR_FUNCTION_H_
