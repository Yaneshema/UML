
#include <iostream>
#include <string>
#include "Moteur.h"

using namespace std;

/**
 * Constructeur
 */

Moteur::Moteur() {

	this->puissance = 0;
}

/**
 * Constructeur avec parametre
 *
 * param puissance
 */

Moteur::Moteur(int puissance) {

	this->puissance = puissance;
}

/**
 * Destructeur
 */

Moteur::~Moteur() {}

/**
 * return puissance
 */

int Moteur::getPuissance() {

	return this->puissance;
}

/**
 * Changer la puissance
 * 
 * param puissance
 */

void Moteur::setPuissance(int puissance) {

	this->puissance = puissance;
}

/**
 * return tensionMax
 */

float Moteur::getTensionMax() {

	return this->tensionMax;
}

/**
 * return cylindree
 */

float Moteur::getCylindree() {

	return this->cylindree;
}

/**
 * Changer la tensionMax
 *
 * param tensionMax
 */

void Moteur::setTensionMax(float tensionMax) {

	this->tensionMax = tensionMax;
}

/**
 * Changer le cylindree
 *
 * param cylindree
 */

void Moteur::setCylindree(float cylindree) {

	this->cylindree = cylindree;
}