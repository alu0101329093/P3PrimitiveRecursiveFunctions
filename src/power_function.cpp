#include "power_function.h"

namespace cc {

PRFPtr PowerFunction::Make() { return std::make_shared<PowerFunction>(); }

std::vector<int> PowerFunction::Evaluate(const std::vector<int>& args) const {
  PRFPtr zero_function{ZeroFunction::Make()};
  PRFPtr successor_function{SuccessorFunction::Make()};
  PRFPtr limit_function{
      CompositionOperation::Make(successor_function, zero_function)};

  PRFPtr product_function{ProductFunction::Make()};
  PRFPtr project_one_function{ProjectionFunction::Make(1)};
  PRFPtr project_three_function{ProjectionFunction::Make(3)};
  PRFPtr project_combination{
      CombinationOperation::Make(project_one_function, project_three_function)};
  PRFPtr recursion_function{
      CompositionOperation::Make(product_function, project_combination)};

  PrimitiveRecursionOperation recursion_operation{limit_function,
                                                  recursion_function};

  return recursion_operation.Evaluate(args);
}

}  // namespace cc
