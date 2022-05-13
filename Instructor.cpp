#include "instructor.h"


using namespace std;
//Instructor::print(){
	//		cout<<"Name"<<name<<endl;
		//	cout<<"office"<<office<<endl;
	//	}

Instructor::Instructor(string n, string o){
	name=n;
	office=o;
}

Instructor::Instructor(){
	set("","");
}


Instructor::set(string n, string o){
		name=n;
	office=o;
}
