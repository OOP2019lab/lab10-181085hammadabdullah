#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <iostream>
using namespace std;
class student;
class course{
	friend ostream &operator<<(ostream &out,const course &obj){
		out<<"The Name of course is : "<<obj.course_name<<endl;
		out<<"The No of course is : "<<obj.course_no<<endl;
		cout<<"The students of this course is"<<" ";
		for(int i=0;i<obj.nos;i++){
		out<<obj.arr[0]<<" ";
		}
		return out;
	}
private:
	string course_name;
	string course_no;
	student **arr;
	int nos;
	void addstudent(student *obj);
public:
	course();
	course(const course &obj);
	course(string Course_name,string Course_no);
	friend class student;
	~course();
};
#endif
