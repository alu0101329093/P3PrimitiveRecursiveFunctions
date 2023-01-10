#include "projection_function.h"

namespace cc {

ProjectionFunction::ProjectionFunction(std::size_t index) : index_{index} {}

std::vector<int> ProjectionFunction::evaluate(const std::vector<int>& args) {
  std::vector<int> result{args[index_]};

  return result;
}

}  // namespace cc
