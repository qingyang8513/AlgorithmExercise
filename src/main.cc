// Copyright 2020 MTRobot.
// Created by Martin on 2020.0801

#include <iostream>

#include "Simple/simple.h"

static void ShowUsage(void) {
  std::cout << "===========================================================\n";
	std::cout << "AlgorithmExercise\n";
	std::cout << "===========================================================\n";
	std::cout << "Usage: ./exe [cmd]\n";
	std::cout << "===========================================================\n";
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    ShowUsage();
    return 0;
  }

  return 0;
}
