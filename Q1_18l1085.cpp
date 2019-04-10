// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "18l1085_course.h"
#include "18l1085_student.h"

int _tmain(int argc, _TCHAR* argv[])
{
student s1("Anum","S1", "11-1351");
student s2("Sara","S2","12-6462");
student s3("Sana","S3","11-4531");
student s4("Zara","S4","12-4342");
student s5("Hira","S5","11-5940");
course c1("OOP", "CS102");
course c2("PF", "CS101");
course c3("AI", "CS365");
cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl<<endl;
cout<<c1<<endl<<c2<<endl<<c3<<endl;
s1.addcourse(&c2);
s1.addcourse(&c2);
s1.addcourse(&c3);
s2.addcourse(&c2);
s3.addcourse(&c2);
s4.addcourse(&c2);
s5.addcourse(&c2);
cout<<s1<<endl;
cout<<c2<<endl;
cout<<c1<<endl;
s5.addcourse(&c1);
s5.addcourse(&c3);
s5.addcourse(&c1);
cout<<s5<<endl;
cout<<c1<<endl;
cout<<c3<<endl;
s1.dropcourse(&c3);
s4.dropcourse(&c3);

	return 0;
}

