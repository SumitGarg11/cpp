#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data){
        this->data=data;
        left = NULL;
        right = NULL;
    }

};
int heightOfTree(struct Node* root){
    if (root == NULL)
		return 0;
	else {
		/* compute the depth of each subtree */
		int lheight = heightOfTree(root->left);
		int rheight = heightOfTree(root->right);

		/* use the larger one */
		if ( rheight >  lheight)
			return (lheight + 1);
		else
			return ( rheight + 1);
	}
}
int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(3);
    root->right= new Node(5);
    root->right->left = new Node(6);
    root->right->right=  new Node(7);

    cout<<"height ";
    cout<<heightOfTree(root);



}
