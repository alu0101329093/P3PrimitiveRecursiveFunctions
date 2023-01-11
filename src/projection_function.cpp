#include "projection_function.h"

namespace cc {

PRFPtr ProjectionFunction::Make(std::size_t index) {
  return std::make_shared<ProjectionFunction>(index);
}

ProjectionFunction::ProjectionFunction(std::size_t index) : index_{index - 1} {}

std::vector<int> ProjectionFunction::Evaluate(
    const std::vector<int>& args) const {
  std::vector<int> result{args[index_]};

  return result;
}

}  // namespace cc
