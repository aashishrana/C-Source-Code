//In selection sort Alg first find the minimum element in the array and then replace it with first element of the arrary
//Assume first element of Array  is sorted 
//first loop move from zero to n-1 
//second loop move form i+1 to n 
// time complexity of selection sort algorithm is o(n^2)
//space complexity of algorithm O(1) constant


#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(arr[j]<arr[i]) {
				int temp =arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<endl;
	}
}


/*Above solution is 100% correct*/


/*#include <iostream>
using namespace std;
int main() {
	int arr[5] = {5,2,7,8,6};
	
	for(int i=0; i<arr-1; i++) {
		for(int j= i+1; j<arr; j++) {
			if(arr[j]<arr[i]) {
				int temp =arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
*/
