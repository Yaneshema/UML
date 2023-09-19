#ifndef MOTO_H
#define MOTO_H
#include "conducteur.h"
#include "Moteur.h"
#include <iostream>
#include <string>

class Moto
{
private:
	int poids;
	Moteur* moteur;

public:
	Moto();
	~Moto();
	Moto(const Moto& moto);
	Moto& operator=(Moto& moto);

	Moto(int poids, Moteur* moteur);

	int getPoids();
	void setPoids(int poids);

	Moteur getMoteur();
	void setMoteur(Moteur* moteur);


};

#endif
