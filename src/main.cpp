#include "main.h"

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "Use: " << argv[0] << "<base> <exponent>" << std::endl;
    return EXIT_SUCCESS;
  }

  cc::PowerFunction power_function;
  int base = std::stoi(argv[1]);
  int exponent = std::stoi(argv[2]);

  std::cout << base << " ** " << exponent << " = "
            << power_function.Evaluate({{base, exponent}})[0] << std::endl;

  return EXIT_SUCCESS;
}
