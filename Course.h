#ifndef COURSE_H
#define COURSE_H
#include <string>
#include "Instructor.h"
using namespace std;

class Course
{
	private: 
		string courseID;
		string courseName;
		int creditHours;
		Instructor instructor;
		
	public:
		Course();
		Course(string, string, int);
		Course(string, string, string);
		string getCourseID();
		string getCourseName();
		int getCreditHours();
		
		void setCourseID(string c);
		void setCourseName(string n);
		void setCreditHours(int h);
		void getCourseDetails();
		void courseRegister(int x, float m,int matric);
	
};

#endif
