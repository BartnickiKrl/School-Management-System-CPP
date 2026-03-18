#pragma once
#include "worker.h"
enum SubjectsTeacher{POLONISTA, MATEMATYK, FIZYK, CHEMIK, INFORMATYK, ANGLISTA, GERMANISTA};
class Teacher: public worker
{
public:
	Teacher(string name, int age, double salary, int seniority, SubjectsTeacher Subject, string classNo=" ");
	string getClass() const;
	string getSubject() const;
	void setClass(string p);
	void setSubject(SubjectsTeacher s);
	virtual void printMore(); //nadpisuje funkcjê klasy bazowej

private:
	SubjectsTeacher Subject;
	string classNo;
};

inline string Teacher::getClass() const
{
	return this->classNo;
}

inline void Teacher::setClass(string p)
{
	classNo = p;
}

inline void Teacher::setSubject(SubjectsTeacher s)
{
	Subject = s;
}
