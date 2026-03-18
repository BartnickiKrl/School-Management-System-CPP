#include "Admin.h"

Admin::Admin(string name, int age, double salary, int seniority, Position myPosition) :worker(name, age, salary, seniority)
{
	setPosition(myPosition);

	double brutto = calcBrutto();
	setSalary(brutto);
	setNetto(brutto - calcTax(brutto, KOSZT_UZYSKU));
}

void Admin::printMore()
{
	cout<<"Pracownik administracji: "<<getPostion()<<endl;
}
