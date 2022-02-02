// first and last occurence of key in an array 

#include <iostream>
using namespace std;


int firstOccurenc(int arr[], int size, int key) {
	 int start = 0;
	 int end = size-1;
	 int mid = start + (end-start)/2;
	 int ans = -1;
	 
	 
	 while (start <= end) {
	 	if(arr[mid] == key) {
	 		ans = mid;
	 		end = mid-1;
		 }
		 else if (key > arr[mid]){
		 	start = mid+1;
		 }
		 else if (key < arr[mid]){
		 	end = mid-1;
		 }
		  mid = start + (end-start)/2;
	 }
	 return ans;
}
int main() {
	int evenArray[6] = {1,2,3,3,4,5};
	
	int index = firstOccurenc(evenArray,6,3);
	
	cout<<"first occurence of 3 is in evenArray at index is "<<index;
}
