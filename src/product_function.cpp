#include "product_function.h"

namespace cc {

std::vector<int> ProductFunction::Evaluate(const std::vector<int>& args) const {
  PRFPtr limit_function{std::make_shared<ZeroFunction>()};
  PRFPtr add_function{std::make_shared<AddFunction>()};
  PRFPtr project_one_function{std::make_shared<ProjectionFunction>(1)};
  PRFPtr project_three_function{std::make_shared<ProjectionFunction>(3)};
  PRFPtr project_combination{std::make_shared<CombinationOperation>(
      project_one_function, project_three_function)};
  PRFPtr recursion_function{std::make_shared<CompositionOperation>(
      add_function, project_combination)};

  PrimitiveRecursionOperation recursion_operation{limit_function,
                                                  recursion_function};

  return recursion_operation.Evaluate(args);
}

}  // namespace cc
