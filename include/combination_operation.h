#ifndef P3PRIMITIVERECURSIVEFUNCTIONS_COMBINATION_OPERATION_H_
#define P3PRIMITIVERECURSIVEFUNCTIONS_COMBINATION_OPERATION_H_

#include "primitive_recursive_function.h"

namespace cc {

class CombinationOperation : public PrimitiveRecursiveFunction {
 public:
  explicit CombinationOperation(PRFPtr first_function, PRFPtr second_function);

  std::vector<int> Evaluate(const std::vector<int>& args) const override;

 private:
  PRFPtr first_function_;
  PRFPtr second_function_;
};

}  // namespace cc

#endif  // P3PRIMITIVERECURSIVEFUNCTIONS_COMBINATION_OPERATION_H_
