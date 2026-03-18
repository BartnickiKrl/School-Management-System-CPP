#include "SchoolBoy.h"
SchoolBoy::SchoolBoy(string name, int age, string className) :pupil(name, age, className)
{
	this->mID = "M_" + this->getID();
}
void SchoolBoy::printOutfit()
{
	cout << "Biala koszula, szkolny krawat i szkolna marynarka, czarne lub granatowe spodnie, polbuty";
}