
#include <iostream>
#include <string>
#include "Moteur.h"

using namespace std;

int puissance = 0;
float tensionMax, cylindree = 0;

Moteur::Moteur() {

	this->puissance = 0;
}

Moteur::Moteur(int puissance) {

	this->puissance = puissance;
}

Moteur::~Moteur() {}
	
int Moteur::getPuissance() {

	return this->puissance;
}

void Moteur::setPuissance(int puissance) {

	this->puissance = puissance;
}

float Moteur::getTensionMax() {

	return this->tensionMax;
}

float Moteur::getCylindree() {

	return this->cylindree;
}

void Moteur::setTensionMax(float tensionMax) {

	this->tensionMax = tensionMax;
}

void Moteur::setCylindree(float cylindree) {

	this->cylindree = cylindree;
}