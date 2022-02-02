/* You have been given two unsorted arrays a1[] and a2[]. They may contain duplicates

for each element an a1[] count elements less than or equal to it in array a2[]

input : m1 = 5 , m2= 7;

a1[] = {89, 67 ,78 , 55, 11}

a2[] = {98, 28, 63, 40, 11, 10, 5}

*/

#include <iostream>
using namespace std;

int main() {
	int m1, m2;
	cin>>m1 >> m2 ;
	
	int a1[m1];
	int a2[m2];
	
	for(int i=0; i<m1; i++) {
		cin>>a1[i];
	}
	for(int i=0; i<m2; i++) {
		cin>>a2[i];
	}
	
	for(int i=0; i<m1; i++) {
		int c = 0;
		for(int j=0; j<m2; j++) {
			if(a2[j] <= a1[i] ) {
				c++;
			}
			
		}
		cout<< c <<" ";
	}
}
