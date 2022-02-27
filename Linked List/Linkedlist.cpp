#include <iostream>
using namespace std;
#include "Node.cpp"

Node * takeInput() {
    int data;
    cin >> data;
    Node *head = NULL;
    while(data != -1) {
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode; 

        }
        else {
            Node *temp = head;
            while (temp -> next != NULL)
            {
               temp = temp -> next;
            }
            temp -> next = newNode;
            
        }
        

        cin >> data;
    }
    return head;      /// Time complexity of this function is O(n square);

}

Node *takeInput_Better() {
    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }

        else {
            tail -> next = newNode;
            tail = tail -> next;
            // or 
            // tail = newNode;
        }
        cin >> data;
    }

    return head;     // Time complexity of this function is O(n);
    
}

void insertNode(Node *head, int i, int data) {
    Node *newNode = new Node(data);
    int count = 0;
    Node * temp = head;
    while (count < i-1) 
    {
        temp = temp -> next;
        count++;
    }

    if(temp != NULL) {
        Node *a = temp -> next;
        temp -> next = newNode;
        newNode -> next = a;

    }

    
    
}

 void print(Node *head) 
    {  
        Node *temp = head;  
        while (temp != NULL) {
            cout << temp -> data <<" ";
            temp = temp -> next;
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

   

   
/*   

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

    print(head); */

    Node *head = takeInput();
    print(head);

    int i, data;
    cin >> i >> data;
    insertNode(head, i, data);

    print(head);




}