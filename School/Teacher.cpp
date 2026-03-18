#include "Teacher.h"

Teacher::Teacher(string name, int age, double salary, int seniority, SubjectsTeacher Subject, string classNo) :worker(name, age, salary, seniority)
{
	setSubject(Subject);
	setClass(classNo);

	double brutto = calcBrutto();
	if( this->getClass() != " " )
		brutto += 400;
	setSalary(brutto);
	setNetto(brutto - (calcTax(0.8*brutto, 0.5*KOSZT_UZYSKU) + calcTax(0.2*brutto, KOSZT_UZYSKU)) );
}

string Teacher::getSubject() const
{
	switch( this->Subject )
	{
		case POLONISTA: return "Polonista";
		case MATEMATYK: return "Matematyk";
		case FIZYK: return "Fizyk";
		case CHEMIK: return "Chemik";
		case INFORMATYK: return "Informatyk";
		case ANGLISTA: return "Anglista";
		case GERMANISTA: return "Germanista";
		default: return "Niepoprawne u¿ycie";
	}
}

void Teacher::printMore()
{
	cout << "Nauczyciel: " << this->getSubject();
	if( this->getClass() == " ")
		cout << " (nie jest wychowawca)" << endl;
	else
		cout << " wychowawca (" << this->getClass() << ")" << endl;
}