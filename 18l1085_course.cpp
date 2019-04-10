#include "stdafx.h"
#include "18l1085_student.h"
#include "18l1085_course.h"
course::course(){
	arr=nullptr;
	nos=0;
}
course::course(string Course_name,string Course_no){
	course_name=Course_name;
	course_no=Course_no;
	nos=0;
	arr=new student*[4];
}
course::course(const course &obj){
	course_name=obj.course_name;
	course_no=obj.course_no;
	arr=new student*[2];
	nos=obj.nos;
	for(int i=0;i<nos;i++){
		arr[0]=obj.arr[0];
	}
}
void course::addstudent(student *obj1)
{
	 if(nos<4){
		arr[nos++]=obj1;
		obj1->addcourse(this);
	}
	else if(nos>=4){
		cout<<"YOU can not add more students beacuse array is full"<<endl;
	}
}
course::~course(){

	if(arr!=nullptr){
		for(int i=0;i<nos;i++){
		delete [] arr[i]; 
	}
		delete [] arr;
	}
}
