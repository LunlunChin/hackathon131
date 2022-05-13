#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <string>
#include <iostream>


using namespace std;
class Instructor
{
	private:
		string name;
		string office;
	public:
		Instructor();
		Instructor(string,string);
		void print(){
			cout<<"Name"<<name<<endl;
			cout<<"office"<<office<<endl;
		};
		
		
		set(string,string);
};

#endif
