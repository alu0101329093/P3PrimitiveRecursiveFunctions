#include "add_function.h"

namespace cc {

PRFPtr AddFunction::Make() { return std::make_shared<AddFunction>(); }

std::vector<int> AddFunction::Evaluate(const std::vector<int>& args) const {
  PRFPtr limit_function{ProjectionFunction::Make(1)};

  PRFPtr successor_function{SuccessorFunction::Make()};
  PRFPtr project_function{ProjectionFunction::Make(3)};
  PRFPtr recursion_function{
      CompositionOperation::Make(successor_function, project_function)};

  PrimitiveRecursionOperation recursion_operation{limit_function,
                                                  recursion_function};

  return recursion_operation.Evaluate(args);
}

}  // namespace cc
