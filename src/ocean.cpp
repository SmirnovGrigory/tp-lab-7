// Copyright 2021 Smirnov Grigory
#include "../include/ocean.h"
#include <random>
#include <iostream>

Ocean::Ocean(size_t n = N, size_t m = M) {
  cells = new Cell*[n];
  for (int i = 0; i < n; i++)
    cells[i] = new Cell[m];
  this->n = n;
  this->m = m;
  for (int i = 0; i < n; i++) 
    for (int j = 0; j < m; j++) {
      cells[i][j].ocean = this;
      cells[i][j].crd = { i, j };
    }
}

Ocean::~Ocean() {
  for (int i = 0; i < n; i++)
    delete[] cells[i];
  delete[] cells;
}

void Ocean::addObjects(int stones, int preys, int predators) {
  if (stones + preys + predators > n * m * 0.8)
    return;
  std::random_device seed;
  while (stones > 0) {
    int i = seed() % n;
    int j = seed() % m;
    if (cells[i][j].obj == nullptr) {
      Object* o = new Stone(&cells[i][j]);
      stuff.push_back(o);
      cells[i][j].setObject(o);
    }
  }
}

void Ocean::run() {

}

void Ocean::print() const {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      std::cout << cells[i][j].obj->getType();
    std::cout << std::endl;
  }
}

size_t Ocean::getN() {
  return n;
}

size_t Ocean::getM() {
  return m;
}
