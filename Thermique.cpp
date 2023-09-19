
#include <iostream>
#include <string>
#include "Thermique.h"

/**
 * Constructeur
 */

Thermique::Thermique() : Moteur() {

	this->cylindree = 0;
}

/**
 * Constructeur avec parametre
 *
 * param cylindree
 */

Thermique::Thermique(float cylindree) : Moteur() {

	this->cylindree = cylindree;
}

/**
 * Destructeur
 */

Thermique::~Thermique() {}

float Thermique::getCylindree() {

	return this->cylindree;
}

/**
 * Changer le cylindree
 *
 * param cylindree
 */

void Thermique::setCylindree() {

	this->cylindree = cylindree;
}
