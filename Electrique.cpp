
#include <iostream>
#include <string>
#include "Electrique.h"

/**
 * Constructeur
 */

Electrique::Electrique() : Moteur() {

	this->tensionMax = 0;
}

/**
 * Constructeur avec parametre
 *
 * param tensionMax
 */

Electrique::Electrique(float tensionMax) : Moteur() {

	this->tensionMax = tensionMax;
}

/**
 * Destructeur
 */

Electrique::~Electrique() {}

float Electrique::getTensionMax() {

	return this->tensionMax;
}

/**
 * Changer la tensionMax
 *
 * param tensionMax
 */

void Electrique::setTensionMax() {

	this->tensionMax = tensionMax;
}
