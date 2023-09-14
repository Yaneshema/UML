#endif CONDUCTEUR_H
#define CONDUCTEUR_H
#include <iostream>
#include <string>
class moto;

class Conducteur
{
private:
	std::string nom;
	std::string prenom;
	int annneeNaissance;
	Moto* mesMotos[10];


protected


public:
	Conducteur();
	~Conducteur();
	Conducteur(const Conducteur& conducteur);
	Conducteur& operator=(const Conducteur& conducteur);

	Conducteur(std::string nom, std::string prenom, int anneeNaissance, Moto* mesMotos[10]);

	/*void setNom(std::string nom);*/
	std::string getNom();

	/*void setPrenom(std::string prenom);*/
	std::string getPrenom();

	int getAnneeNaissance();

	void afficheMotos();

	void addMoto(Moto newMoto);

	void rmMoto(Moto rmMoto);




}


