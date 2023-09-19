
#include <iostream>
#include <string>
#include "Moteur.h"
#include "Moto.h"

int poids;
Moteur* moteur;


Moto::Moto() {

	this->poids = 0;
	this->moteur = NULL;
}

Moto::Moto(int poids, Moteur* moteur) {

	this->poids = poids;
	this->moteur = moteur;
}

Moto::~Moto() {}

int Moto::getPoids() {

	return this->poids;
}

Moteur Moto::getMoteur() {

	return *this->moteur;
}

void Moto::setPoids(int poids) {

	this->poids = poids;
}

void Moto::setMoteur(Moteur* moteur) {

	this->moteur = moteur;
}
