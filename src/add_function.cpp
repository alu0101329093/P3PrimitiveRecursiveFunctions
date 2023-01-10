#include "add_function.h"

namespace cc {

std::vector<int> AddFunction::Evaluate(const std::vector<int>& args) const {
  PRFPtr limit_function{std::make_shared<ProjectionFunction>(1)};
  PRFPtr successor_function{std::make_shared<SuccessorFunction>()};
  PRFPtr project_function{std::make_shared<ProjectionFunction>(3)};
  PRFPtr recursion_function{std::make_shared<CompositionOperation>(
      successor_function, project_function)};

  PrimitiveRecursionOperation recursion_operation{limit_function,
                                                  recursion_function};

  return recursion_operation.Evaluate(args);
}

}  // namespace cc
