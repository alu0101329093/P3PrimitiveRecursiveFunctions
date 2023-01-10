#ifndef P3PRIMITIVERECURSIVEFUNCTIONS_COMPOSITION_FUNCTION_H_
#define P3PRIMITIVERECURSIVEFUNCTIONS_COMPOSITION_FUNCTION_H_

#include "primitive_recursive_function.h"

namespace cc {

class CompositionFunction : public PrimitiveRecursiveFunction {
 public:
  explicit CompositionFunction(PRFPtr first_function, PRFPtr second_function);

  std::vector<int> Evaluate(const std::vector<int>& args) const override;

 private:
  PRFPtr first_function_;
  PRFPtr second_function_;
};

}  // namespace cc

#endif  // P3PRIMITIVERECURSIVEFUNCTIONS_COMPOSITION_FUNCTION_H_