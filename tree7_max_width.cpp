#include <iostream>
#include <bits/stdc++.h>
// use level order approach but here print only the length 
using namespace std;
struct Node{
    int data;
    Node* right;
    Node* left;
    Node(int data){
        data = data;
        left = right  = NULL;
    }

};
int maxWidth(Node* root){
    if(root == NULL) return 0;
    int res = 0;
    queue<Node*> q;
    q.push(root);
    while(q.empty() == false){
        int count  = q.size();
        res = max(res,count);
        for(int i =0; i<count; i++){
            Node* root = q.front();
            q.pop();
            if(root->left != NULL){
                q.push(root->left);
            }
            if(root->right != NULL){
                q.push(root->right);
            }
        }
    }
    return res;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    // root-> left->left = new Node(3);
    // root->left->right = new Node(4);
    root-> right->left = new Node(3);
    root-> right->left->left = new Node(3);
    cout<<maxWidth(root);


}