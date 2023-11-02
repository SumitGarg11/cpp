#include <bits/stdc++.h>
using namespace std;
class Node{
    public:

    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data =data;
        this->left=NULL;
        this->right = NULL;
    }
};
void levelOfOrder(Node* root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while(q.empty() == false){
        Node* root = q.front();
        cout<<(root->data)<<" ";
        q.pop();

        if(root->left != NULL)
        q.push(root->left);

        if(root->right != NULL)
        q.push(root->right);

    }
}
int main(){
     Node* root = new Node(1);
     root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(30);
    root->left->left = new Node(4);
    root->left->right = new Node(8);
    levelOfOrder(root);
}