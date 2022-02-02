#include <iostream>
using namespace std;
int main() {
    // Pair is a class whic is use to store to value of same or diffrent data type
    // Pair use to maintain releation between two things
    pair<int , string> p;
   // p = make_pair(2, "xyz");

//    p = {2,"abc"};
//    pair<int, string> &p1 = p;
//    p1.first = 3;

//     cout<<p.first<< " "<<p.second<<endl; 

//     pair<int, int> p_array[3];
//     p_array[0] = {1,2};
//     p_array[1] = {2,3};
//     p_array[2] = {3,4};

//     swap(p_array[0], p_array[2]);
//     for(int i=0; i<3; i++) {
//         cout<< p_array[i].first << " "<<p_array[i].second << endl; 
//     }

// take input from the user
       cin >> p.first;
       cout << p.first;
}