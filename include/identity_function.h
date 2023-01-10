#ifndef P3PRIMITIVERECURSIVEFUNCTIONS_IDENTITY_FUNCTION_H_
#define P3PRIMITIVERECURSIVEFUNCTIONS_IDENTITY_FUNCTION_H_

#include "primitive_recursive_function.h"

namespace cc {

class IdentityFunction : public PrimitiveRecursiveFunction {
 public:
  std::vector<int> Evaluate(const std::vector<int>& args) const override;
};

}  // namespace cc

#endif  // P3PRIMITIVERECURSIVEFUNCTIONS_IDENTITY_FUNCTION_H_
