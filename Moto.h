#ifndef MOTO_H
#define MOTO_H
#include "conducteur.h"
#include <iostream>
#include <string>
class Moteur;

class Moto
{
private:
	int poids;
	moteur* Moteur

	protected


public:
	Moto();
	~Moto();
	Moto(const Moto& moto);
	Moto& operator=(Moto& moto);

	Moto(int poids,moteur* Moteur);

	int getPoids();
	void setPoids(int poids);

	Moteur getMoteur();
	void setMoteur(moteur* Moteur);
	

}
