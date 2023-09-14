
#include <iostream>
#include <string>
#include "Moteur.h"

using namespace std;

class Moteur {

private:

	int puissance;

public:

	Moteur() {

		this->puissance = 0;

	}

	Moteur(int puissance) {

		this->puissance = puissance;

	}

	~Moteur() {}
	
	int getPuissance() {

		return this->puissance;

	}

	void setPuissance(int puissance) {

		this->puissance = puissance;

	}

protected:

	float tensionMax, cylindree;

	float getTensionMax() {

		return this->tensionMax;

	}
	float getCylindree() {

		return this->cylindree;

	}

	void setTensionMax(float tensionMax) {

		this->tensionMax = tensionMax;

	}

/*	void setCylindree(float cylindree) {

		this->cylindree = cylindree;

	}
*/
};