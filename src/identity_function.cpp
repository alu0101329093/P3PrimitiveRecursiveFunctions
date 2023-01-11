#include "identity_function.h"

namespace cc {

PRFPtr IdentityFunction::Make() { return std::make_shared<IdentityFunction>(); }

std::vector<int> IdentityFunction::Evaluate(
    const std::vector<int>& args) const {
  return args;
}

}  // namespace cc
