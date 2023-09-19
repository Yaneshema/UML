
#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H

#include "Moto.h"
#include <iostream>
#include <string>

class Conducteur
{
private:

	std::string nom;
	std::string prenom;
	int anneeNaissance;
	Moto *mesMotos[10];

public:

	Conducteur();
	~Conducteur();
	Conducteur(const Conducteur& conducteur);
	Conducteur& operator=(const Conducteur& conducteur);

	Conducteur(std::string nom, std::string prenom, int anneeNaissance, Moto *mesMotos[10]);

	/*void setNom(std::string nom);*/
	std::string getNom();

	/*void setPrenom(std::string prenom);*/
	std::string getPrenom();

	int getAnneeNaissance();

	Moto *afficheMotos();

	void addMoto(Moto *newMoto);

	void rmMoto(Moto *rmMoto);

};

#endif