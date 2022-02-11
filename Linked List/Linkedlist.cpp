#include <iostream>
using namespace std;
#include "Node.cpp"

 void print(Node *head) 
    {    
        while (head != NULL) {
            cout << head -> data <<" ";
            head = head -> next;
        }
        
        
    }

int main() {
    //Statically 
    
    // Node n1(1);
    
    // Node *head = &n1;

    // Node n2(2);

    // n1.next = & n2;

    // cout << n1.data << " "<< n2.data << endl;

    // cout << head -> data<<endl;

    // dynamically 

    // Node *n3 = new Node(10);
    // Node *dyhead = n3;
    // Node *n4 = new Node(20);
    // n3 -> next = n4;

    // cout<< n3 -> data << endl;

   

   
   

    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(8);

    Node *head = & n1;
    n1.next = & n2;
    n2.next = & n3;
    n3.next = & n4;
    n4.next = & n5;

    // cout<<n1.data<<endl;
    // cout<< head -> data<< endl;

    print(head);

    print(head);


}