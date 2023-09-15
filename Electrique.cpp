
#include <iostream>
#include <string>
#include "Electrique.h"

Electrique::Electrique() {

	this->tensionMax = 0;
}

Electrique::Electrique(float tensionMax) {

	this->tensionMax = tensionMax;
}

Electrique::~Electrique() {}

float Electrique::getTensionMax() {

	return this->tensionMax;
}

void Electrique::setTensionMax() {

	this->tensionMax = tensionMax;
}
