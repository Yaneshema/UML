
#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H

#include <iostream>
#include <string>
#include "Moteur.h"

class Electrique : public Moteur {

private:

	float tensionMax;

public:

	Electrique();
	Electrique(float tensionMax);
	~Electrique();

	float getTensionMax();
	void setTensionMax();
};

#endif