#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *right;
    Node *left;
    // Node *prev;

    
        Node(int data){
            Node *right = NULL;
            Node *left = NULL;
            // Node *prev = NULL;
        }
        
        Node *Root = new Node(data);
        
};

int insert_left(Node* &Root,int data){
        Node *child1 = new Node(data);
        Root->left = child1;
        child1->data = data;
        // child1->prev = Root;

    }

int insert_right(Node* &Root,int data){
        Node *child2 = new Node(data);
        Root->right = child2;
        child2->data = data;
        // child2->prev = Root;
    }

int display(Node* &Root){
    Node * temp = Root;
    while (temp->left != NULL)
    {
        cout<<temp->data;
        temp = temp->left;
    }
    while (temp->right != NULL)
    {
        cout<<temp->data;
        temp = temp->right;
    }
    
    

}


int main(){
    // Node *Root  = new Node;
    // Root->data = 10;
    
    // Node *child1 = new Node;
    // Root->left = child1;
    // child1->data = 20;
    Node* Root;
    Node* child1;
    Node* child2;
    insert_left(child1,10);
    insert_right(child2,20);
    display(Root);

    return 0;
}

