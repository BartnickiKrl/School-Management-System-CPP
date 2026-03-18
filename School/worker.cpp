#include "worker.h" 

worker::worker(string name, int age, double salary, int seniority) :person(name, age)
{ 
	setSalary(salary);
	setSeniority(seniority);
}

worker::worker(const worker& p)
{
	*this=p;
}

void worker::printWorker()
{
	cout<<getName()<<' '<<getAge()<<"lat pracuje-" <<getSeniority()<<"lat"<< endl;

	cout<<"brutto= "<<this->getSalary()<<" PLN"<<", tax= "<<round((this->getSalary()-this->getNetto())*100)/100.0<<" PLN"<<", netto= "<<round(this->getNetto()*100)/100.0<<" PLN";
	
	cout<<'\n';printMore();
	cout<<'\n';
}

double worker::calcTax(double brutto, double koszt_uzysku)
{
	double podatek = (brutto - koszt_uzysku) * 0.18 - KWOTA_WOLNA;

	if( podatek > 0 )
		return podatek;
	return 0;
}

double worker::calcBrutto()
{
	int Seniority = this->getSeniority();
	double brutto = this->getSalary();
	if( Seniority >= 5 )
	{
		if ( Seniority > 20 )
			Seniority = 20;
		brutto *= (1 + Seniority/100.0);
	}
	return brutto;
}