#include <iostream>
#include "Wrapper.h"

int main() {
  ns::Wrapper wrapper(5);
  std::cout << "Should be five: " << wrapper.Get() << std::endl;
  return 0;
}
