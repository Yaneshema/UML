
#ifndef THERMIQUE_H
#define THERMIQUE_H

#include <iostream>
#include <string>
#include "Moteur.h"

class Thermique : public Moteur {

private:

	float cylindree;

public:

	Thermique();
	Thermique(float tensionMax);
	~Thermique();

	float getCylindree();
	void setCylindree();
};

#endif