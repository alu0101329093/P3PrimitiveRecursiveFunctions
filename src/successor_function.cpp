#include "successor_function.h"

std::vector<int> cc::SuccessorFunction::evaluate(const std::vector<int>& args) {
  std::vector<int> result;
  for (auto a : args) {
    result.push_back(a + 1);
  }
  return result;
}
