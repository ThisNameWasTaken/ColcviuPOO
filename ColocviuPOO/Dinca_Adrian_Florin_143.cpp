// Dinca Adrian Florin 143
// IDE: Visual Studio 2017 Enterprise
// Standardul c++: cel putin c++11 preferabil c++14 sau c++17

#include <iostream>
#include <vector>
#include <string>
#include "Persoana.h"
#include "Pensionar.h"
#include "Student.h"
#include "Copil.h"
#include "Eveniment.h"
#include "Muzeu.h"

using namespace std;

int main() {
	vector<Muzeu> muzee;

	Muzeu muzeuNou;
	muzeuNou.setNume("Muzeu 1");
	muzeuNou.setAdresa("Adresa 1");
	muzeuNou.setOrar({ 9, 20 });

	vector<Eveniment> evenimente;
	Eveniment evenimentNou;
	evenimentNou.setNume("Eveniment 1 pentru Muzeu 1");
	evenimentNou.setPret(125);
	evenimentNou.setMuzeu(&muzeuNou);

	cout << muzeuNou << endl;

	system("pause");
	return 0;
}