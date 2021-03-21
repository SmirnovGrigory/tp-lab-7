// Copyright 2021 Smirnov Grigory
#ifndef INCLUDE_OBJECT_H_
#define INCLUDE_OBJECT_H_

#include "common.h"

#define STONE_N '#'
#define PREY_N 'f'
#define PREDATOR_N 'S'

enum class ObjType { STONE, PREY, PREDATOR };

class Cell;
class Object {
 protected:
	Cell* cell;
 public:
  Object(Cell* c = nullptr);
  virtual void live() = 0; // жизнь объекта
  void setCell(Cell* c);
};

#endif // INCLUDE_OBJECT_H_
