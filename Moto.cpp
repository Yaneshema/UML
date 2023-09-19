
#include <iostream>
#include <string>
#include "Moteur.h"
#include "Moto.h"

/**
 * Constructeur
 */

Moto::Moto() {

	this->poids = 0;
	this->moteur = NULL;
}

/**
 * Constructeur avec parametres
 * 
 * param poids
 * moteur
 */

Moto::Moto(int poids, Moteur* moteur) { 

	this->poids = poids;
	this->moteur = moteur;
}

/**
 * Destructeur
 */

Moto::~Moto() {}


/** 
 * return le poids
 */

int Moto::getPoids() {

	return this->poids;
}

/**
 * return le moteur
 */

Moteur Moto::getMoteur() {

	return *this->moteur;
}


/**
 * Changer le poids
 * 
 * param poids
 */

void Moto::setPoids(int poids) {

	this->poids = poids;
}

/**
 * Changer le moteur
 * 
 * param moteur
 */

void Moto::setMoteur(Moteur* moteur) {

	this->moteur = moteur;
}
