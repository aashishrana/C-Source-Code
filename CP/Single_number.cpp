// Leet code 136

#include <iostream>
using namespace std;

int main() {
    int arr[3] = {2,2,1};

    int result = 0;

    for(int i=0; i<3; i++) {
        result = result ^ arr[i];
    }

    cout <<  result << endl;
}