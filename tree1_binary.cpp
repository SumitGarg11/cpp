#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left  = new Node(20);
    root->left->right = new Node(20);
    root->right->left = new Node(30);
     root->right->right = new Node(30);
}