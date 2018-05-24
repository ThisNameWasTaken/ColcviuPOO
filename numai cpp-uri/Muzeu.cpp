#include "Muzeu.h"



Muzeu::Muzeu(bool eInRenovare)
{
	this->eInRenovare = eInRenovare;
	this->incasari = 0;
}


Muzeu::~Muzeu()
{
}

void Muzeu::adaugaIncasari(const float& pretBilet)
{
	this->incasari += pretBilet;
}

ostream& operator<<(ostream& out, const Muzeu& muzeu)
{
	Orar orar = muzeu.getOrar();
	out << "Nume muzeu: " << muzeu.getNume() << "\nOrar: " << orar.oraDeschidere << " - " << orar.oraInchidere << "\nAdresa: " << muzeu.getAdresa() << "\n";
	return out;
}

istream& operator>>(istream& in, Muzeu& muzeu)
{
	return in;
}
