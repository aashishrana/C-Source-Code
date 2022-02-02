#include <bits/stdc++.h>
using namespace std;

bool checkPair(int A[],int size, int x) {
	for (int i=0; i<(size-1); i++) {
		for (int j=i+1; j<size; j++) {
			if(A[i] + A[j] == x) {
				cout<<"pair with a given sum  "<< x << "is"<< A[i]<<" "<< A[j] <<endl;
				
				return 1;
			}
		}
	}
	return 0;
}

int main() {
	int A[] = {0, -1 , 2 , -3, 1};
	
	int x = 3;
	
	int size = sizeof(A);
	
	if(checkPair(A, size, x)) {
		cout<<" valid pair exist for "<< x<<endl;
	}
	else {
		cout<<"No valid pair exist "<< x<<endl;
	}
	
	return 0;
}
