#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    v[1] = 100;
    v[5] = 35;

    v.push_back(54);

    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    cout << v[4] << endl;

    cout << "size of the vector is " << v.size() << endl;
    cout << "capacity of the vector is " << v.capacity() << endl;
    cout << v.at(2) << endl;

    cout<< v.at(8) << endl;

    v.push_back(4325);
    v.push_back(234);
    v.push_back(243);
    
    cout << v[5] << endl;
    cout << v[6] << endl;
     

}