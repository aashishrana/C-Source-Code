#include <iostream>
using namespace std;

int pivotElement(int arr[],int size){
	int start =0;
	int end = size-1;
	int mid = start+(end-start)/2;
	
	while(start<end) {
		if( mid >arr[0]) {
			start = mid+1;
			
		}
		else {
			end = mid;
		}
		mid = start + (end-start)/2;
	}
	return start;
}

int main() {
	int pivotArray[5] = {8,10,17,1,3};
	
	int find = pivotElement(pivotArray, 5);
	
	cout<<"pivot element is"<<find<<endl;
}

