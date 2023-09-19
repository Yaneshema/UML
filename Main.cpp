
#include <iostream>
#include <string>
#include "Moteur.h"
#include "Moto.h"
#include "Conducteur.h"

int main() {

	Conducteur* Jose = new Conducteur("Jose", "Pash", 1997, NULL);
	Moto *ZR7 = new Moto(20, NULL);
	Moteur* ZR7 = new Moteur(20);

	Jose->addMoto(ZR7);
}