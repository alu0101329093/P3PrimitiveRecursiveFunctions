#include "zero_function.h"

namespace cc {

PRFPtr ZeroFunction::Make() { return std::make_shared<ZeroFunction>(); }

std::vector<int> ZeroFunction::Evaluate(const std::vector<int>& args) const {
  return std::vector<int>{0};
}

}  // namespace cc
