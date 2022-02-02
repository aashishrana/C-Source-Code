#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key) {
	
	int start =0 ;
	int end = size - 1;
	
	int mid = (start+end)/2;
	
	while(start <= end) {
		if(arr[mid] == key) {
			return mid;
		}
		// go to right wala part 
		if (key > arr[mid]) {
			start = mid + 1;
		}
		
		else {
			end = mid - 1;
		}
		mid = (start+end)/2;  //start + (end-start)/2 ;
	}
	
	return -1;
	
}

int main() {
	int evenArray[8] = {2,4,6,8,10,12,14,16} ;
	int oddArray[5] = {10,8,7,6,5};
	
	int evenIndex = binarySearch(evenArray, 8, 14);
	cout<<"In Even array index of 14 is "<<evenIndex<<endl;
	
	int oddIndex = binarySearch(oddArray, 5, 7);
	cout<<"In Odd array index of 7 is "<<oddIndex<<endl;
}
