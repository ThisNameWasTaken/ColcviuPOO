#include "Persoana.h"
#include "Eveniment.h"



Persoana::Persoana()
{
	this->reducere = 0;
}


Persoana::~Persoana()
{
}

void Persoana::platesteBilet(Eveniment* eveniment)
{
	if (!eveniment) {
		return;
	}

	eveniment->aplicaReducere(this->reducere);
}

ostream& operator<<(ostream& out, const Persoana& persoana)
{
	const string sex = persoana.getSex() == Sex::Masculin ? "Masculin" : "Feminin";

	out << "Nume persoana: " << persoana.getNume() << "\n" << "varsta: " << persoana.getVarsta() << "sex: " << sex << "\n";

	return out;
}

istream& operator>>(istream& in, Persoana& persoana)
{
	string nume;
	string sexStr;
	int varsta;

	cout << "Nume persoana: ";
	in >> nume;
	persoana.setNume(nume);

	cout << "Varsta: ";
	in >> varsta;
	persoana.setVarsta(varsta);
	
	cout << "Sex:(Feminin/Masculin) ";
	in >> sexStr;
	persoana.setSex(sexStr == "Feminin" ? Sex::Feminin : Sex::Masculin);


	return in;
}
