#ifndef STUDENT_H
#define STUDENT_H
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Student{
private:
    string name;
    int matricNo;
    string school;
    int year;
    string password;
    float grade;

public:
    Student();
    Student(string,int,string,int,float);
    void setName(string n);
    void setMatricNo(int m);
    void setSchool(string s);
    void setYear(int y);
    float getGrade();
    string getName();
    int getMatricNo();
    string getSchool();
    int getYear();
    void print();
   // friend void courseRegister(Student);
};

#endif
