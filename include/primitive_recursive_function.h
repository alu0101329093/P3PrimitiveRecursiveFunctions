#ifndef P3PRIMITIVERECURSIVEFUNCTIONS_PRIMITIVE_RECURSIVE_FUNCTION_H_
#define P3PRIMITIVERECURSIVEFUNCTIONS_PRIMITIVE_RECURSIVE_FUNCTION_H_

#include <memory>
#include <vector>

namespace cc {

class PrimitiveRecursiveFunction {
 public:
  virtual std::vector<int> Evaluate(const std::vector<int>& args) = 0;
};

using PRFPtr = std::shared_ptr<PrimitiveRecursiveFunction>;

}  // namespace cc

#endif  // P3PRIMITIVERECURSIVEFUNCTIONS_PRIMITIVE_RECURSIVE_FUNCTION_H_
