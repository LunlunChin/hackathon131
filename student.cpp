#include "student.h"
#include <string>
Student::Student(string name,int matricNo,string school,int year,float grade){
	
	//This Pointer used to pass value to local variable
    this->name= name;
    this->matricNo= matricNo;
    this->school =school;
    this->year=year;
    this->grade=grade;
    
}   

string Student::getName(){
    return name;
}

int Student::getMatricNo(){
    return matricNo;
}

string Student::getSchool(){
    return school;
}

int Student::getYear(){
    return year;
}
float Student::getGrade(){
    return grade;
}
void Student::setName(string n){
    name = n;
}
    void Student::setMatricNo(int m){
        matricNo = m;
    }
    void Student::setSchool(string s){
        school = s; 
    }
    void Student::setYear(int y){
        year=y;
    }


