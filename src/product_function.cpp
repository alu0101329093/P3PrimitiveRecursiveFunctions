#include "product_function.h"

namespace cc {

PRFPtr ProductFunction::Make() { return std::make_shared<ProductFunction>(); }

std::vector<int> ProductFunction::Evaluate(const std::vector<int>& args) const {
  PRFPtr limit_function{ZeroFunction::Make()};

  PRFPtr add_function{AddFunction::Make()};
  PRFPtr project_one_function{ProjectionFunction::Make(1)};
  PRFPtr project_three_function{ProjectionFunction::Make(3)};
  PRFPtr project_combination{
      CombinationOperation::Make(project_one_function, project_three_function)};
  PRFPtr recursion_function{
      CompositionOperation::Make(add_function, project_combination)};

  PrimitiveRecursionOperation recursion_operation{limit_function,
                                                  recursion_function};

  return recursion_operation.Evaluate(args);
}

}  // namespace cc
