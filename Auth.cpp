#include <iostream>
#include <fstream>
#include <string>
#include "Auth.h"

using namespace std;


Auth::register(){
	string matricNo, password;
		
		cout<<"Enter you username: ";
		cin>>matricNo;
		cout<<"Enter your password: ";
		cin>>password;
		
		ofstream file;
		file.open("userData/"+username+".txt");
		file<<username<<endl<<password;
		file.close();
		
		main();
}
