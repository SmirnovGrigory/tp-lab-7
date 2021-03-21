// Copyright 2021 Smirnov Grigory
#include "../include/cell.h"

void Cell::init(Pair p, Ocean* oc) {
	ocean = oc;
	crd = p;
}

Object* Cell::getObject() const {
	return obj;
}

void Cell::setObject(Object* o) {
	obj = o;
}

void Cell::killMe() {
	obj = nullptr;
}
