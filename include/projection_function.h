#ifndef P3PRIMITIVERECURSIVEFUNCTIONS_PROJECTION_FUNCTION_H_
#define P3PRIMITIVERECURSIVEFUNCTIONS_PROJECTION_FUNCTION_H_

#include <cstddef>

#include "primitive_recursive_function.h"

namespace cc {

class ProjectionFunction : public PrimitiveRecursiveFunction {
 public:
  explicit ProjectionFunction(std::size_t index);
  std::vector<int> Evaluate(const std::vector<int>& args) const override;

 private:
  std::size_t index_;
};

}  // namespace cc

#endif  // P3PRIMITIVERECURSIVEFUNCTIONS_PROJECTION_FUNCTION_H_
