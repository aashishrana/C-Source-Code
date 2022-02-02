#include <iostream>
using namespace std;

int sum(int n) {
	int total = n*(n+1)/2;
	
	return total;
}

int main() {
	int  n;
	cin>>n;
	
	int ans = sum(n);
	
	cout<<ans<<endl;
}
