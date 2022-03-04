#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *left;
    Node *right;

    Node(int d) {
        this -> data = d;
        this -> left =NULL;
        this -> right = NULL;
    }


};

Node *buildTree(Node *root) {
    cout << "Entr the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1) {
        return NULL;
    } 

    cout << " Entr the data for inserting in left " << endl;
    root -> left = buildTree(root -> left);

    cout << " Entr the data for inserting in right " << endl;
    root -> right = buildTree(root -> right);
    return root;

}

int main() {
    Node * root = NULL;
    // creation of the tree
    root = buildTree(root);
}