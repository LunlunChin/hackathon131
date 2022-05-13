#include "Course.h"
#include <iomanip>
#include <string>
#include <algorithm>
#include <iostream>
#include "Instructor.h"
#include "student.h"
using namespace std;

Course::Course(){
	courseID="";
	courseName="";
	creditHours=0;
	
}

Course::Course(string c, string n,int h){
    this->courseID=c;
		 this->courseName = n;
		 this->creditHours = h;
}   
Course::Course(string courseid,string n, string o){
   		courseID=courseid;
			instructor.set(n,o);
}   


string Course::getCourseID(){
	return courseID;
}

string Course::getCourseName(){
	return courseName;
}

int Course::getCreditHours(){
	return creditHours;
}


void Course::setCourseID(string c){
	courseID=c;
}

void Course::setCourseName(string n){
	courseName=n;
}

void Course::setCreditHours(int h){
	creditHours=h;
}

void Course::getCourseDetails(){
	
	cout<<"course ID"<<courseID<<endl;
	cout<<"course name"<<courseName<<endl;
	cout<<"creditHours"<<creditHours<<endl;
	instructor.print();
	
} 


void Course::courseRegister(int x,float m,int matric){
//	Student student1;
	
	string matricnumber= to_string(matric);
	int choice=x;
	int grade=m;
	bool apply;
	cout<<matricnumber;
	if(choice==1){
		cout<<"Registering Course - CPC121";
		if(m<40){
			cout<<"Cannot register, Grade too Low";
			
		}
		else{
			cout<<"Registration completed";
			// Create and open a text file
			
  			ofstream MyFile(matricnumber + ".txt",ios_base::app);

  			// Write to the file
  			MyFile << "CPC121 Python Programming\n";

  			// Close the file
  			MyFile.close();
		}
	}
	
	if(choice==2){
		cout<<"Registering Course - CPC131";
		if(m<40){
			cout<<"Cannot register, Grade too Low";
			
		}
		else{
			cout<<"Registration completed";
			// Create and open a text file
			
  			ofstream MyFile(matricnumber + ".txt",ios_base::app);

  			// Write to the file
  			MyFile << "CPC131 c++ Programming\n";

  			// Close the file
  			MyFile.close();
		}
	}
	
	
	
} 
