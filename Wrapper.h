#pragma once

namespace ns {
class Wrapper {
  int value_;

 public:
  explicit Wrapper(int value);

  int Get() const;
};
}