#include "person.h"


class student:private person 
{

private:
	string fyp_name;
	double cgpa;
public:
	student(string,string,int,string,double);
	~student();
	string getfyp();
	void setfyp(string);
    double  getcgpa();
	void setcgpa(double);
	void setage(int);
	int getage();
	void printstudent();

};