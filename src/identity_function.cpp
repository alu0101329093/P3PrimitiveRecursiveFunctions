#include "identity_function.h"

namespace cc {

std::vector<int> IdentityFunction::Evaluate(const std::vector<int>& args) const {
  return args;
}

}  // namespace cc
