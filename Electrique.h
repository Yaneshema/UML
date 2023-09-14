
#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H

#include <iostream>
#include <string>
#include "Moteur.h"

using namespace std;

class Electrique : public Moteur {

private:

	int tensionMax;

public:

	Electrique();
	Electrique(int puissance);
	~Electrique();

	int getTensionMax();
	void setTensionMax();
};

#endif