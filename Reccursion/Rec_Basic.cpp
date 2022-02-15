#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    else {
        int chooti = factorial(n-1);
        int badi = n * chooti;

        return badi;
    }
}

int main() {
    int n;
    cin>>n;

    cout<< factorial(n) << endl;;



    return 0;
}