#pragma once

#include <iostream>
#include <string>

using namespace std;

class Eveniment
{
public:
	Eveniment(const float& pret = 0);
	~Eveniment();

	inline string getNume() const { return this->nume; }
	inline void setNume(const string& nume) { this->nume = nume; }

	inline float getPret() const { return this->pret; }
	inline void setPret(const float& pret) { this->pret = pret; }

	void aplicaReducere(const float& reducere);
	
	friend ostream& operator<< (ostream& out, const Eveniment& eveniment);
	friend istream& operator>> (istream& in, Eveniment& eveniment);

	inline class Muzeu* getMuzeu() const { return this->muzeu; }
	inline void setMuzeu(class Muzeu* muzeu) { this->muzeu = muzeu; }

private:
	string nume;
	float pret;

	class Muzeu* muzeu; // Muzeul la care se desfasoara evenimentul;
};

