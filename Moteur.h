
#ifndef MOTEUR_H
#define MOTEUR_H

#include <iostream>
#include <string>

using namespace std;

class Moteur {

private:

	int puissance;

public:

	Moteur();
	Moteur(int puissance);
	~Moteur();

	int getPuissance();
	void setPuissance(int puissance);

protected:

	float tensionMax, cylindree;
	float getTensionMax(), getCylindree();
	void setTensionMax(float tensionMax), setCylindree(float cylindree);
};

#endif