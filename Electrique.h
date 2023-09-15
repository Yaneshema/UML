
#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H
#include <iostream>
#include <string>


class Electrique {

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