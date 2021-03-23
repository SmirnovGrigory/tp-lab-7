// Copyright 2021 Smirnov Grigory
#ifndef INCLUDE_OCEAN_H_
#define INCLUDE_OCEAN_H_

#include "common.h"
#include "Cell.h"
#include "Stone.h"
#include "Prey.h"
#include "Predator.h"
#include <list>
#include <vector>

class Ocean {
 friend Cell;
 private:
	Cell** cells;
	std::vector<Object*> stuff;
	size_t n;
	size_t m;

public:
	Ocean(size_t n = N, size_t m = M);
	~Ocean();
	void print() const;
	void fillType(int number, char type);
	void fillAll(int stones, int preys, int predators);
	void addObj(Object* o);
	void run();
	size_t getN();
	size_t getM();
};

#endif // INCLUDE_OCEAN_H_