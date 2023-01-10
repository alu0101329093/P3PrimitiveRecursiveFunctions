#include "zero_function.h"

namespace cc {

std::vector<int> ZeroFunction::Evaluate(const std::vector<int>& args) const {
  return std::vector<int>{0};
}

}  // namespace cc
