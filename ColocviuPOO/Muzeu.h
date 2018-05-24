#pragma once

#include <vector>
#include <string>
#include "Eveniment.h"

using namespace std;

struct Orar { int oraDeschidere = 8; int oraInchidere = 24; };

class Muzeu
{
public:
	Muzeu(bool eInRenovare = false);
	~Muzeu();

	inline string getNume() const { return this->nume; }
	inline void setNume(const string& nume) { this->nume = nume; }

	inline string getAdresa() const { return this->adresa; }
	inline void setAdresa(const string& adresa) { this->adresa = adresa; }

	inline Orar getOrar() const { return this->orar; }
	inline void setOrar(const Orar& orar) { this->orar = orar; }

	inline vector<Eveniment> getEvenimete() const { return this->evenimente; }
	inline void setEvenimente(const vector<Eveniment>& evenimente) { this->evenimente = evenimente; }

	inline bool EInRenovare() const { return this->eInRenovare; }
	inline void SetEInRenovare(bool eInRenovere) { this->eInRenovare = eInRenovare; }

	inline float getIncasari() const { return this->incasari; }
	void adaugaIncasari(const float& pretBilet);

	friend ostream& operator<< (ostream& out, const Muzeu& muzeu);
	friend istream& operator>> (istream& in, Muzeu& muzeu);

private:
	vector<Eveniment> evenimente;
	string nume;
	string adresa;
	Orar orar;

	float incasari;

	bool eInRenovare;
};

