#include <bits/stdc++.h>
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

void  printkdistaneTree(Node* root,int k){
    if(root == NULL || k<0 ){
        return;
    }
    if(k == 0) {
        cout<<root->data<<" ";
        return;
    }
    printkdistaneTree((root->left),k-1);
    printkdistaneTree((root->right),k-1);

}    
int main(){
    Node* root = new Node(1);
     root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(30);
    root->left->left = new Node(4);
    root->left->right = new Node(8);
    
   printkdistaneTree(root,2);
    
}