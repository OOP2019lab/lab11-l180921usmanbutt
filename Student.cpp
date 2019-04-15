#include "student.h"

student::student(string f,string l,int a,string fyp,double gpa): person(f,l,a)
{
	fyp_name=fyp;
	cgpa=gpa;
	cout<<"student() called \n";
}

student::~student()
{
	cout<<"~student() called \n";
}

string student::getfyp()
{
	return fyp_name;
}

void student::setfyp(string f)
{
	fyp_name=f;
}

void student::setage(int a)
{
	age=a;
}

int student::getage()
{
	return age;
}

double student::getcgpa()
{
	return cgpa;
}

void student::setcgpa(double c)
{
	cgpa=c;
}

void student::printstudent()
{
	cout<<getfname()<<" "<<getlname()<<" is " <<age<<" years old, and his gpa is "<<cgpa<<endl;
}
