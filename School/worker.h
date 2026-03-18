#pragma once
#include "person.h"

#define KWOTA_WOLNA 46.34
#define KOSZT_UZYSKU 111.25

class worker :public person
{ 
protected: 
	double mSalary;
	int mSeniority;
	double mNetto;
	
public: 
	worker(string name, int age, double salary, int seniority); 
	worker(const worker& p); 
	double getSalary() const;
	double getNetto() const;
	int getSeniority() const; 
	void setSalary(double Salary); 
	void setNetto(double Netto);
	void setSeniority(int Seniority); 
	void printWorker();
	virtual void printMore()=0;

	double calcTax(double brutto, double koszt_uzysku);
	double calcBrutto();
};

inline double worker::getSalary() const
{
	return this->mSalary;
}

inline double worker::getNetto() const
{
	return this->mNetto;
}

inline int worker::getSeniority() const
{
	return this->mSeniority;
}

inline void worker::setSalary(double Salary)
{
	mSalary=Salary;
}

inline void worker::setNetto(double Netto)
{
	mNetto=Netto;
}

inline void worker::setSeniority(int Seniority)
{
	mSeniority=Seniority;
}
