//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//	char nume[40];
//private:
//	int matricol;
//protected:
//	float medie;
//public:
//	void init(const char* n = "Anonim", int nr = 0, float m = 0)
//	{
//		strcpy_s(nume, n);
//		matricol = nr;
//		medie = m;
//	}
//
//	char* returneaza_nume()
//	{
//		return this->nume;
//	}
//
//	void modifica_nume(char* n)
//	{
//		strcpy_s(this->nume, n);
//	}
//
//	float get_medie()
//	{
//		if (this->medie > 9)
//		{
//			return this->medie;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//
//	void set_medie(float m)
//	{
//		this->medie = m;
//	}
//
//
//	void afiseaza_adresa();
//};
//
//void Student::afiseaza_adresa()
//{
//	cout << "Adresa obiectului curent este: " << this << endl; // prin this aici luam adresa
//}
//
//void main()
//{
//	Student s;
//	s.init("Andrei", 123, 5);
//	cout << s.nume<< endl;
//	s.afiseaza_adresa();
//	cout << s.get_medie(); // afiseaza 0, e media mai mica ca 9
//
//
//
//}
