#include <iostream>
using namespace std;

#define pi 3.14
// Macros does not take any space it replace the name to the value before compile

int main() {
    int r = 5;

    double area = pi * r * r;

    cout << "Area is " << area << endl;

    return 0;
}