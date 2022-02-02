#include <iostream>
using namespace std;
#include "StudentTemplate.cpp"

int main() {
	StudentTemplate s1;
	
	StudentTemplate *s2 = new StudentTemplate;
	
	s1.setAge(20);
	
	s2 -> setAge(24);
	
	s1.display();
	
	s2 -> display();
}
