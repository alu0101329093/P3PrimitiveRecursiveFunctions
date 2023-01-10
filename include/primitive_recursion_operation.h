#ifndef P3PRIMITIVERECURSIVEFUNCTIONS_PRIMITIVE_RECURSION_OPERATION_H_
#define P3PRIMITIVERECURSIVEFUNCTIONS_PRIMITIVE_RECURSION_OPERATION_H_

#include "combination_function.h"
#include "identity_function.h"
#include "primitive_recursive_function.h"

namespace cc {

class PrimitiveRecursionOperation : public PrimitiveRecursiveFunction {
 public:
  explicit PrimitiveRecursionOperation(PRFPtr first_function,
                                       PRFPtr second_function);

  std::vector<int> Evaluate(const std::vector<int>& args) const override;

 private:
  PRFPtr first_function_;
  PRFPtr second_function_;
};

}  // namespace cc

#endif  // P3PRIMITIVERECURSIVEFUNCTIONS_PRIMITIVE_RECURSION_OPERATION_H_
