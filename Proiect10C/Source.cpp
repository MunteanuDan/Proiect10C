#include<iostream>
using namespace std;

class Jucator
{
public:
	char nume[40];
	int scor;
	char simbol;

};

class Mutare
{
public: 
	int linie;
	int coloana;
};

class Joc
{
public:
	Jucator j1, j2;
	Mutare mutare_curenta;
	int tabel[3][3];
	int Situatie_joc();
	void Executa_Mutare();
	void Salveaza_Scor();
	void Afiseaza_Tabel();


};