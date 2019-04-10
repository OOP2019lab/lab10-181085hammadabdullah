#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;
class course;
class student{
	friend ostream &operator<<(ostream &out ,const student &obj){
		out<<"The Name of student is : "<<obj.name<<endl;
		out<<"The Username of student is : "<<obj.username<<endl;
		out<<"The roll no of student is : "<<obj.roll_no<<endl;
		out<<"The courses of student is : "<<endl;
		for(int i=0;i<obj.nofoc;i++){
			out<<obj.arr1[i]<<" ";
		}
		return out;
	
	}
private:
	string name;
	string username;
	string roll_no;
	course **arr1;
	int nofoc;
	
public:
	student();
	student(string name,string username,string Roll_no);
	student(const student &obj);
	void addcourse(course *obj);
	void dropcourse(course *obj);
	~student();

};
#endif
