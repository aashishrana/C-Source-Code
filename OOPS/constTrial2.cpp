#include <iostream>
using namespace std;
#include "constTrial.cpp"

int main() {
	constTrial s1;
	constTrial s2(30);
	
	constTrial * s3 = new constTrial;
	
	constTrial * s4 = new constTrial(2);
	
	(*s4).display();
	
	s1 = s2;
	
	s2 = s1;
	
	
}
