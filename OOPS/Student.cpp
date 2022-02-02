#include <iostream>
using namespace std;

class Student {
	public:
	 int age;
	 int rollNo;
};

int main() {
	// creating objects statiically
	Student S1;
	Student S2,s3,s4;
	
	S1.age = 24;
	S1.rollNo = 101;
	
	cout << S1.age <<" "<< S1.rollNo <<endl;
	
	// creating objects dynamically
	
	Student *s5 = new Student;
	(*s5).age = 23;
	cout<<(*s5).age<<endl;
}
