#include "successor_function.h"

namespace cc {

std::vector<int> SuccessorFunction::Evaluate(const std::vector<int>& args) {
  std::vector<int> result;
  for (auto value : args) {
    result.push_back(value + 1);
  }
  return result;
}

}  // namespace cc
