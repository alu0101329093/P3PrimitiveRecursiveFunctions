#include "combination_operation.h"

namespace cc {

CombinationOperation::CombinationOperation(PRFPtr first_function,
                                           PRFPtr second_function)
    : first_function_{std::move(first_function)},
      second_function_{std::move(second_function)} {}

std::vector<int> CombinationOperation::Evaluate(
    const std::vector<int>& args) const {
  std::vector<int> results{first_function_->Evaluate(args)};
  std::vector<int> second_function_results{second_function_->Evaluate(args)};

  results.insert(results.end(), second_function_results.begin(),
                 second_function_results.end());

  return results;
}

}  // namespace cc
