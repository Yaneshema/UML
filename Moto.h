
#ifndef MOTO_H
#define MOTO_H

#include <iostream>
#include <string>
#include "Moteur.h"

class Moto {

private:

	int poids;
	Moteur* moteur;

public:

	int getPoids();
	Moteur getMoteur();
	void setPoids(int poids), setMoteur(Moteur *moteur);
};

#endif