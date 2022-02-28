#include <iostream>
#include <stack>
using namespace std;
class Stack {
    //properties 
    public:
    int *arr;
    int top;
    int size;
    

    // Behaviour 

    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if(size - top > 1) {
            top++;
            arr[top] = element;
        }
        else {
            cout << " Stack is Overflow " << endl;
        }

    }

    void pop() {
        if(top >= 0) {
            top--;
        }
        else {
            cout << "stack usder flow" << endl;
        }


    }

    int peek() {
        if(top >= 0 ) {
            return arr[top];
        }
        else {
            cout << "Stack is empty " << endl;
            return -1;
        }

    }

    bool isEmpty() {

        if(top == -1) {
            return true;
        }
        else {
            return false;
        }

    }



};

int main() {
    // creation of stack using stl function
   /* stack<int> s;
    
    //Push Operation 
    s.push(2);
    s.push(3);
    s.push(4);

    // Pop function 
    s.pop();

    cout << "Printing top element " << s.top() << endl;

    if(s.empty()) {
        cout << "stack is empty " << endl;
    }
    else {
        cout << "stack is not empty" << endl;
    }

    cout << " size of the stack is " << s.size() << endl;*/

    Stack st(5);

    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);
    st.push(66);

    cout << st.peek() << endl;

    cout << st.isEmpty() << endl;

    st.pop();

    cout << st.peek() << endl;

    if(st.isEmpty()) {
        cout << "Stack is Empty " << endl;
    }
    else {
        cout << "Stack is not Empty " << endl;
    }
}