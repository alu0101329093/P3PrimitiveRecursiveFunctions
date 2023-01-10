#include "primitive_recursion_operation.h"

namespace cc {

PrimitiveRecursionOperation::PrimitiveRecursionOperation(PRFPtr first_function,
                                                         PRFPtr second_function)
    : first_function_{std::move(first_function)},
      second_function_{std::move(second_function)} {}

std::vector<int> PrimitiveRecursionOperation::Evaluate(
    const std::vector<int>& args) const {
  int last_value = args[args.size() - 1];
  std::vector<int> new_args{args.begin(), args.end() - 1};
  if (last_value == 0) return first_function_->Evaluate(new_args);

  new_args.push_back(last_value - 1);
  std::vector<int> recursion_result{Evaluate(new_args)};
  new_args.insert(new_args.end(), recursion_result.begin(),
                  recursion_result.end());

  return second_function_->Evaluate(new_args);
}

}  // namespace cc
