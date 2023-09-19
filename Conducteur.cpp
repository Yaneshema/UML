
#include "Conducteur.h"
#include "Moto.h"

using namespace std;

Conducteur::Conducteur() {
	this->nom = "inconnu";
	this->prenom = "inconnu";
	this->anneeNaissance = 0;
	*this->mesMotos = *mesMotos;
}

Conducteur::Conducteur(std::string nom, std::string prenom, int anneeNaissance, Moto* mesMoto[10]) {
	this->nom = nom;
	this->prenom = prenom;
	this->anneeNaissance = anneeNaissance;
	*this->mesMotos = *mesMotos;
}

Conducteur::~Conducteur() {

	// cout << "Destruction du conducteur " << this->nom << " " << this->prenom << " " << this->anneeNaissance << " " << this->mesMotos[10] << endl;

}

Conducteur::Conducteur(const Conducteur& entre)
{
	cout << "Copie de Conducteur" << endl;
	this->nom = entre.nom;
	this->prenom = entre.prenom;
	this->anneeNaissance = entre.anneeNaissance;
	*this->mesMotos = *entre.mesMotos;
}

Conducteur& Conducteur::operator = (const Conducteur& entre)
{
	cout << "Affectation du conducteur" << std::endl;
	if (this != &entre)  // Pour éviter que l'on ne se recopie pas...
	{
		this->nom = entre.nom;
		this->prenom = entre.prenom;
		this->anneeNaissance = entre.anneeNaissance;
		*this->mesMotos = *entre.mesMotos;
	}
	return *this;
}

std::string Conducteur::getNom()
{
	return this->nom;
}

std::string Conducteur::getPrenom()
{
	return this->prenom;
}

int Conducteur::getAnneeNaissance()
{
	return this->anneeNaissance;
}

Moto *Conducteur::afficheMotos()
{
	return *this->mesMotos;
}

void Conducteur::addMoto(Moto *newMoto)
{
	bool M = 0;
	int i = 0;

	while (M = 0) {

		if (this->mesMotos[i] = NULL) {

			this->mesMotos[i] = newMoto;
			M = 1;
		}

		else {

			i++;
		}
	}
}


void Conducteur::rmMoto(Moto* rmMoto) 
{
	for (int i = 0; i < 10; i++) {

		if (this->mesMotos[i] = rmMoto) {

			this->mesMotos[i] = NULL;
		}
	}
}