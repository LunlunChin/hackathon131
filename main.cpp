#include <sstream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include "Course.h"
#include "student.h"


using namespace std;


void displayMainMenu();
void listCourse();
void registerCourse();
void searchCourse();
void summaryCourse();
void userRegister(string &,string&);
bool IsLoggedIn();
//string,string

int main(){
	Course course;
	float mainMenuChoice;
	string matricNo;
	string password;
	
	int choice;
	
	cout<<"1.Register\n2.Log In\nEnter: ";
	cin>>choice;
	
	if(choice==1){
		
		userRegister(matricNo,password);
		
	}
		
	//end of registration
	
	else if(choice=2){
		cout<<matricNo;
		bool status = IsLoggedIn();
		
		if (!status){
			cout<<"False Login"<<endl;
			system("PAUSE");
			return 0;
		}
		
		else{
			cout<<"Success Login"<<endl;
			system("cls");
			do {
					displayMainMenu();
		do {
	
			cin >> mainMenuChoice;
		
			//Loop when input is not an integer or not within the range from 1 to 6
			while(!cin || mainMenuChoice < 1 || mainMenuChoice > 6 ) {
			
				//Error Message
				cout << "\nInvalid integer value!\n"
				     << "Enter an integer from 1 to 6: ";
			     
				//Clear the error of previous input
				cin.clear(); 
			
				//Ignore INT_MAX characters of the previous input until '\n' is met
				cin.ignore(INT_MAX,'\n'); 
				cin >> mainMenuChoice;
			}
			
		} while(mainMenuChoice < 1 || mainMenuChoice > 6);
	
	if(mainMenuChoice == 1) {
		
	registerCourse();
		}
	
	if(mainMenuChoice == 2) {
	//	searchProduct(productQueue, activityStack);
	}
	
	if(mainMenuChoice == 3) {
		listCourse();
	}
	if(mainMenuChoice == 4) {
	//	productQueue.displayAll();
	//	activityStack.push("Viewed summary of all products");
	}
	if(mainMenuChoice == 5) {
	//	activityStack.displayAll();
	}
	
	} while (mainMenuChoice != 6);
	//6) Exit program
	cout << "\nThanks for using the system!\n\nProgram terminated..." << endl;
		}
	}
	
	//end of login
		
			
}



void displayMainMenu(){
		cout << "\n  << Course Registration System >>\n\n"
	     << " 1)  Register a Course\n"
	     << " 2)  Search Course\n" 
	     << " 3)  List of Courses & Requirement\n"
	     << " 4)  View summary my course\n"
	     << " 5)  View activity log\n"
	     << " 6)  Exit Program\n\n"
	     << "Enter an option: ";
	}
	
void registerCourse() {
	Course course;
	Student student("Lun",1212121,"shshsh",1000,52.2);
	
	float stuGrade=student.getGrade();
	int stuMatric=student.getMatricNo();
	string courseid,n,o,line;
	int choice=100;
		ifstream dataFile;
		dataFile.open("Course.txt", ios::in);

		
			
	while(getline(dataFile, line)) {
		stringstream ss(line);
		getline(ss,courseid, ',');
        getline(ss, n, ',');
        getline(ss, o, ',');
        
        cout<<courseid<<" "<<n<<" "<<o<<endl;
        

		}
    cin>> choice;
    
    while(choice>5||choice<0){
    	cout<<"Please enter number from 1-5: \n";
    	cin>> choice;
	}
	
	course.courseRegister(choice,stuGrade,stuMatric);
	
	
}
void listCourse() {
	string courseid,n,o,line;
	

   /** ifstream readProductFile("prof.txt", ios::in);

    Course course1;
    while(getline(readProductFile, line)) {

        stringstream ss(line);
        getline(ss,courseid, ',');
        getline(ss, n, ',');
        getline(ss, o, ',');
        

        course1.setCourseID(courseid);
        course1.setProductDesc(productDesc);
        course1.setQuantity(stoi(quantity));
      
    }

    readProductFile.close();
}
**/
		
		//read>>courseid>>n>>o;
	//	read.close();
		Course course1(courseid,n,o);
	course1.getCourseDetails();

}



void searchCourse() {
	

}

void summaryCourse() {
	

}

void userRegister(string &matric, string &pass){
	 //string matric;
	 //string pass;
		
		cout<<"Enter you username: ";
		cin>>matric;
		cout<<"Enter your password: ";
		cin>>pass;
		
		ofstream file;
		file.open("userData/"+matric+".txt");
		file<<matric<<endl<<pass;
		file.close();
		
		main();
}

bool IsLoggedIn(){
	string username, password,un,pw;
	
	cout<< 	"Enter Username:";
	cin>> username;
	cout<< 	"Enter Password:";
	cin>> password;
	
	
	ifstream read("userData/"+username+".txt");
	getline(read,un);
	getline(read,pw);
	
	if(un==username && pw==password){
		return true;
	}
	else{
		return false;
	}
	
	
	
}

