#pragma once
#include <string>

using namespace std;

enum class Sex { Masculin, Feminin };

class Persoana
{
public:
	Persoana();
	virtual ~Persoana();

	inline string getNume() const { return this->nume; }
	inline void setNume(const string& nume) { this->nume = nume; }

	inline int getVarsta() const { return this->varsta; }
	inline void setVarsta(const int& varsta) { this->varsta = varsta; }

	inline Sex getSex() const { return this->sex; }
	inline void setSex(const Sex& sex) { this->sex = sex; }

	inline float getReducere() const { return this->reducere; }

	friend ostream& operator<< (ostream& out, const Persoana& persoana);
	friend istream& operator>> (istream& in, Persoana& persoana);

	void platesteBilet(class Eveniment* eveniment);

protected:
	inline void setReducere(const float& reducere) { this->reducere = reducere; }

private:
	string nume;
	float reducere;
	Sex sex;
	int varsta;
};

