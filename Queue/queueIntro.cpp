#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue <int> q;

    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);

    cout << " size of the queue is " << q.size() << endl;

    q.pop();

    cout << " size of the queue is " << q.size() << endl;

    if(q.empty()) {
        cout << "q is empty " << endl;
    }

    else {
        cout << " q is not empty " << endl;
    }

    cout << q.front() << endl;

    q.push(23);
    cout << q.front() << endl;

    
}