// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d){
        data = d;
        left=right=NULL;
    }
};

Node* buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    Node* n = new Node(d);
    n -> left = buildTree();
    n -> right = buildTree();
    return n;
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    Node* root = buildTree();
    preorder(root);
    return 0;
}
