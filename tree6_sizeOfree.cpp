#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;

    }
};
int size(Node* root){
    if(root == NULL) return 0;
    else return size(root->left)+1+size(root->right);
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(30);
    root->left->left = new Node(4);
    root->left->right = new Node(8);
    std::cout<<size(root)<<" ";
}
