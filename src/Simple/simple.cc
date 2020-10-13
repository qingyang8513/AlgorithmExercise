// Copyright 2020 MTRobot.
// Created by Martin on 2020.0801

#include "Simple/simple.h"

#include <algorithm>

std::vector<int> LTCode::PlusOne(const std::vector<int>& digits) {
  std::vector<int> ret;
  std::for_each(digits.begin(), digits.end(),
                [&ret](int value) { ret.push_back(value); });

  for (int i = static_cast<int>(ret.size()) - 1; i >= 0; i--) {
    ret[i]++;
    if (ret[i] < 10) {
      return ret;
    } else {
      ret[i] = 0;
    }
  }
  ret.insert(ret.begin(), 1);
  return ret;
}
