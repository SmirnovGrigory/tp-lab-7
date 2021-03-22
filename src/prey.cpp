// Copyright 2021 Smirnov Grigory
#include "../include/prey.h"
#include "../include/cell.h"
#include <random>

Prey::Prey(Cell* c = nullptr) : Object(c) {
	std::random_device seed;
	liveCycle = 20 + (seed() % 5);
	type = PREY_N;
}

void Prey::live() {
	liveCycle--;
	reproductionCycle--;
}
