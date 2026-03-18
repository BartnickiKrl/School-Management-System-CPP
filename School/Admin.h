#pragma once
#include "worker.h"
enum Position{YOUNG,MIDDLE,OLD};

class Admin: public worker
{
public:
	Admin(string name, int age, double salary, int seniority, Position myPosition);
	string getPostion() const;
	void setPosition(Position p);
	virtual void printMore(); //nadpisuje funkcjê klasy bazowej
	
private:
	Position myPosition;

};

inline string Admin::getPostion() const
{
	switch( this->myPosition )
	{
		case YOUNG: return "mlodszy specjalista";
		case MIDDLE: return "specjalista";
		case OLD: return "starszy specjalista";
		default: return "niepoprawne uzycie";
	}
}

inline void Admin::setPosition(Position p)
{
	myPosition = p;
}