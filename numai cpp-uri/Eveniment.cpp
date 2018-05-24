#include "Eveniment.h"
#include "Muzeu.h"


Eveniment::Eveniment(const float& pret)
{
	this->pret = pret;
}


Eveniment::~Eveniment()
{
}

void Eveniment::aplicaReducere(const float& reducere)
{
	this->muzeu->adaugaIncasari(this->pret * reducere);
}

ostream& operator<<(ostream& out, const Eveniment& eveniment)
{
	out << "eveniment: " << eveniment.getNume() << "\n" << "pret: " << eveniment.getPret() << "\n";
	return out;
}

istream& operator>>(istream& in, Eveniment& eveniment)
{
	string nume;
	float pret;
	cout << "Nume eveniment: ";
	in >> nume;
	cout << "Pret intrare: ";
	in >> pret;

	return in;
}
