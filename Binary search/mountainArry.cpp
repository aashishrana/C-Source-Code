#include <iostream>
using namespace std;

int peakElement(int arr[], int size) {
	
	int start = 0;
	int end = size-1;
	int mid = start + (end-start)/2;
	while(start<end) {
		if(arr[mid] < arr[mid+1]) {
		start = mid + 1;
	   }
	   else {
		end = mid;
	  }
	   mid = start + (end-start)/2; 
    }
     return start;

	}
	
int main() {
	int peakArray[5] = {3,4,5,6,1};
	
	int find = peakElement(peakArray,5) ;
	
	cout<<"peak of the array is "<<find<<endl;
}
