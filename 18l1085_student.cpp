#include "stdafx.h"
#include "18l1085_student.h"
#include "18l1085_course.h"
student::student(){
	arr1=nullptr;
}
student::student(string Name,string Username,string Roll_no){
	name=Name;
	username=Username;
	roll_no=Roll_no;
	arr1=new course*[2];
	nofoc=0;
}
student::student(const student &obj){
	name=obj.name;
	username=obj.username;
	roll_no=obj.roll_no;
	arr1=new course*[4];
	nofoc=obj.nofoc;
	for(int i=0;i<nofoc;i++){
		arr1[i]=obj.arr1[i];
	}
}
void student::addcourse(course *obj){
	if(arr1[0]==obj || arr1[1]==obj){
	cout<<"The course already Exsists "<<endl;
	}
	else{
	if(nofoc<2){
		arr1[nofoc++]=obj;
		obj->addstudent(this);
	}


	else{
	cout<<"Size is Full"<<endl;
	}
	}
}
void student::dropcourse(course *obj){

	if(arr1[0]==obj){
	delete [] arr1[0]->arr[0];//first delete student from that course
	delete [] arr1[0];//then delete course from that student
	arr1[0]=nullptr;
	arr1[0]=arr1[1];
	delete [] arr1[1]->arr[1];
	delete [] arr1[1];
	arr1[1]=nullptr;
	nofoc--;
	}
	else if(arr1[1]==obj){
		delete [] arr1[1]->arr[1];//first delete student from that course
	delete [] arr1[1];//then delete course from that student
	arr1[1]=nullptr;
		nofoc--;
	}
	else {
		cout<<"course is not registered "<<endl;
	}
}
student::~student(){

	if(arr1!=nullptr){
		for(int i=0;i<nofoc;i++){
		delete [] arr1[i]; 
	}
		delete [] arr1;
	}
}