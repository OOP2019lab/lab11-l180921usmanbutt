#include "faculty.h"

faculty::faculty(string f,string l,int a,int cc,string tele):person(f,l,a)
{
	course_count=cc;
	tele_ext=tele;
	cout<<"faculty() called \n";
}

faculty::~faculty()
{
	cout<<"~faculty() called \n";
}

void faculty::setcc(int a)
{
	course_count=a;
}

int faculty::getcc()
{
	return course_count;
}

void faculty::setage(int a)
{
	age=a;
}

int faculty::getage()
{
	return age;
}

string faculty::gettele()
{
	return tele_ext;
}

void faculty::settele(string t)
{
	tele_ext=t;
}

void faculty::printfaculty()
{
	cout<<"faculty member name: "<<getfname()<<" "<<getlname()<<endl;
	cout<<"AGE: "<<age<<endl;
	cout<<"no.of courses: "<<course_count<<endl;
	cout<<"ext. "<<tele_ext<<endl;
}