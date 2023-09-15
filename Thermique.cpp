
#include <iostream>
#include <string>
#include "Thermique.h"

Thermique::Thermique() : Moteur() {

	this->cylindree = 0;
}

Thermique::Thermique(float cylindree) : Moteur() {

	this->cylindree = cylindree;
}

Thermique::~Thermique() {}

float Thermique::getCylindree() {

	return this->cylindree;
}

void Thermique::setCylindree() {

	this->cylindree = cylindree;
}
