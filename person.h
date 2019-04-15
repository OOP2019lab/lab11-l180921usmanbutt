#pragma once 

#include <iostream>
#include <string>

using namespace std;


class person
{
private:
	string f_name;
	string l_name;
protected:
	int age;
public:
	person(string,string,int);
	~person();
	string getfname();
	void setfname(string);
	string getlname();
	void setlname(string);
	void printinfo();
};