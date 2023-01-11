#include "main.h"

int main(int argc, char* argv[]) {
  cc::PowerFunction power_function;
  int base = std::stoi(argv[1]);
  int exponent = std::stoi(argv[2]);

  std::cout << base << " ** " << exponent << " = "
            << power_function.Evaluate({{base, exponent}})[0] << std::endl;

  return EXIT_SUCCESS;
}
