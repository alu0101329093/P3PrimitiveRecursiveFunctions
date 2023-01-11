#include "composition_operation.h"

namespace cc {

PRFPtr CompositionOperation::Make(PRFPtr first_function,
                                  PRFPtr second_function) {
  return std::make_shared<CompositionOperation>(first_function,
                                                second_function);
}

CompositionOperation::CompositionOperation(PRFPtr first_function,
                                           PRFPtr second_function)
    : first_function_{std::move(first_function)},
      second_function_{std::move(second_function)} {}

std::vector<int> CompositionOperation::Evaluate(
    const std::vector<int>& args) const {
  std::vector<int> result{
      first_function_->Evaluate(second_function_->Evaluate(args))};

  return result;
}

}  // namespace cc
