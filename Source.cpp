#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <set>
using namespace std;


class Gardian
{
public:

	string nume;
	int ani;
	float medieProbe;
	bool vaccinat;
	char gradProfesional;
	static int nrGardieni;
	double salariu;

	//constructorul fara parametri
	Gardian()
	{
		this->nume = "Nespecificat";
		this->ani = 0;
		this->medieProbe = 0;
		this->vaccinat = false;
		this->gradProfesional = ' ';
		this->salariu = 0.0;
		Gardian::nrGardieni++;
		cout << "S-a apelat constructorul fara parametri" << "\n---" << endl;
	}
	//constructorul cu parametri 
	Gardian(string n, int a, float mP, bool v, char gP, double s)
	{
		this->nume = n;
		this->ani = a;
		this->medieProbe = mP;
		this->vaccinat = v;
		this->gradProfesional = gP;
		this->salariu = s;
		Gardian::nrGardieni++;
		cout << "S-a apelat constructorul cu parametri" << "\n---" << endl;
	}
	//constructorul de copiere
	Gardian(Gardian& g)
	{
		this->nume = g.nume;
		this->ani = g.ani;
		this->medieProbe = g.medieProbe;
		this->vaccinat = g.vaccinat;
		this->gradProfesional = g.gradProfesional;
		this->salariu = g.salariu;
		Gardian::nrGardieni++;
		cout << "S-a apelat constructorul de copiere" << "\n---" << endl;
	}
};
int Gardian::nrGardieni = 0;

void main()
{
	Gardian g1;
	Gardian g2("George", 20, 7.8, true, 'A', 2.23);
	Gardian g3 = g2;
}