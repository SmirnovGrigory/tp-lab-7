// Copyright 2021 Smirnov Grigory
#ifndef INCLUDE_COMMON_H_
#define INCLUDE_COMMON_H_

typedef size_t coord_t;

#define DEAD -1;

struct Pair {
	coord_t x; // 0..N-1
	coord_t y; // 0..M-1
};

const size_t N = 70;
const size_t M = 150;

#endif // INCLUDE_COMMON_H_
