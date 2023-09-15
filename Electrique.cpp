
#include <iostream>
#include <string>
#include "Electrique.h"

Electrique::Electrique() : Moteur() {

	this->tensionMax = 0;
}

Electrique::Electrique(float tensionMax) : Moteur() {

	this->tensionMax = tensionMax;
}

Electrique::~Electrique() {}

float Electrique::getTensionMax() {

	return this->tensionMax;
}

void Electrique::setTensionMax() {

	this->tensionMax = tensionMax;
}
