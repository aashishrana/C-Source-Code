#include <iostream>
using namespace std;

int main(){
	
	int a,b;
	
	cout<<"Entr A and B"<<endl;
	
	cin>>a>>b;
	
	int ans =1;
	
	for (int i=1; i<=b; i++) {
		ans = ans * a ;
	}
	
	cout<<" answer is "<< ans  << endl;
	
}
