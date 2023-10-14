#include "Wrapper.h"

ns::Wrapper::Wrapper(int value) : value_(value) {
}

int ns::Wrapper::Get() const {
  return value_;
}
