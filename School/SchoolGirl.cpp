#include "SchoolGirl.h"
SchoolGirl::SchoolGirl(string name, int age, string className):pupil(name,age,className)
{
	this->mID = "F_" + this->getID();
}
void SchoolGirl::printOutfit()
{
cout<<"Biala bluzka, szkolny krawat i szkolna marynarka, czarna lub granatowa spodnica, plaskie obowie";
}