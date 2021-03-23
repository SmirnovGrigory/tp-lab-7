// Copyright 2021 Smirnov Grigory
#include "../include/prey.h"
#include "../include/predator.h"

Predator::Predator(Cell* c) : Prey(c) {
	type = PREDATOR_N;
}

void Predator::live() {

}