#include "person.h"


person::person(string name,string lname,int a)
{
	f_name=name;
	l_name=lname;
	age=a;
	cout<<"person() called \n";
}

person::~person()
{
	cout<<"~person() called \n";
}

string person::getfname()
{
	return f_name;
}

void person::setfname(string a)
{
	f_name=a;
}

string person::getlname()
{
	return l_name;
}


void person::setlname(string l)
{
	l_name=l;
}

void person::printinfo()
{
	cout<<f_name<<" "<<l_name<<" is "<<age <<" years old \n";

}  