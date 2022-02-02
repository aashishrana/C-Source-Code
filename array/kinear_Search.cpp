#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
	for (int i=0; i<=size; i++) {
		if(arr[i] ==key) {
		 cout<<key;
		 
	    }
	}
		
	

}

int main(){
//	int n;
//	cin>>n;
	
	int arr[10];
	for (int i=0; i<=10; i++ ){
		cin>>arr[i];
	}
	int key;
	cout<<"Entr the key";
	cin>>key;
	int find = linearSearch(arr, 10, key);
	
	cout<<find;
	
}
