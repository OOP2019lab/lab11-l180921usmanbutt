#include "person.h"



class faculty:private person 
{
private:
	int course_count;
	string tele_ext;
public:
	faculty(string,string,int,int,string);
	~faculty();
	void setcc(int c);
	int getcc();
	void setage(int);
	int getage();
	string gettele();
	void settele(string);
	void printfaculty();
};