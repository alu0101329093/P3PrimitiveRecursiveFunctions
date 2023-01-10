#ifndef P3PRIMITIVERECURSIVEFUNCTIONS_ZERO_FUNCTION_H_
#define P3PRIMITIVERECURSIVEFUNCTIONS_ZERO_FUNCTION_H_

#include "primitive_recursive_function.h"

namespace cc {

class ZeroFunction : public PrimitiveRecursiveFunction {
 public:
  std::vector<int> evaluate(const std::vector<int>& args) override;
};

}  // namespace cc

#endif  // P3PRIMITIVERECURSIVEFUNCTIONS_ZERO_FUNCTION_H_
