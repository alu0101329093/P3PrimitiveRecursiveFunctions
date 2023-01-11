#include "power_function.h"

std::vector<int> cc::PowerFunction::Evaluate(
    const std::vector<int>& args) const {
  PRFPtr zero_function{std::make_shared<ZeroFunction>()};
  PRFPtr successor_function{std::make_shared<SuccessorFunction>()};
  PRFPtr limit_function{std::make_shared<CompositionOperation>(
      successor_function, zero_function)};

  PRFPtr product_function{std::make_shared<ProductFunction>()};
  PRFPtr project_one_function{std::make_shared<ProjectionFunction>(1)};
  PRFPtr project_three_function{std::make_shared<ProjectionFunction>(3)};
  PRFPtr project_combination{std::make_shared<CombinationOperation>(
      project_one_function, project_three_function)};
  PRFPtr recursion_function{std::make_shared<CompositionOperation>(
      product_function, project_combination)};

  PrimitiveRecursionOperation recursion_operation{limit_function,
                                                  recursion_function};

  return recursion_operation.Evaluate(args);
}
