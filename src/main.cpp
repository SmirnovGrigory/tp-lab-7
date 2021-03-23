// Copyright 2021 Smirnov Grigory
#include "../include/ocean.h"
#include <iostream>

int main() {
	Ocean O(30, 100);
	O.fillAll(300, 1000, 100);
	O.print();
}
