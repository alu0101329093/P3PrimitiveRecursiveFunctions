#include "successor_function.h"

namespace cc {

PRFPtr SuccessorFunction::Make() {
  return std::make_shared<SuccessorFunction>();
}

std::vector<int> SuccessorFunction::Evaluate(
    const std::vector<int>& args) const {
  std::vector<int> result;
  for (auto value : args) {
    result.push_back(value + 1);
  }
  return result;
}

}  // namespace cc
