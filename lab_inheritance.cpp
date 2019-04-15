
#include "student.h"
#include "faculty.h"


int  main()
{

	student s1("Ted","Thompson",22,"fyp_1",3.91);
	faculty f1("richard","karp",45,2,"420");

	/*person() called
student() called
person() called
faculty() called
Press any key to continue . . .*/


	s1.printstudent();
	f1.printfaculty();


	system("pause");
	return 0;
}
