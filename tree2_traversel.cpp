




#include <iostream>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// Function to print the postorder traversal 
// of a Binary Tree
void printPostorder(struct Node* root)
{
    if (root == NULL)
        return;

    // first recur on left subtree
    printPostorder(root->left);

    // then recur on right subtree
    printPostorder(root->right);

    // now deal with the node
    cout << root->data << " ";
}

// Function to print the Inorder traversal
// of a Binary Tree
void printInorder(struct Node* root)
{
    if (root == NULL)
        return;

    /* first recur on left child */
    printInorder(root->left);

    /* then print the data of node */
    cout << root->data << " ";

    /* now recur on right child */
    printInorder(root->right);
}

// Function to print the PreOrder traversal 
// of a Binary Tree
void printPreorder(struct Node* root)
{
    if (root == NULL)
        return;

    /* first print data of node */
    cout << root->data << " ";

    /* then recur on left sutree */
    printPreorder(root->left); 

    /* now recur on right subtree */
    printPreorder(root->right);
} 

// Driver Code
int main()
{
    // Contrust the Tree
    //      1
    //     /  \
    //    2    3
    //   / \    
    //  4   5
    
    struct Node *root = new Node(1);
    root->left    = new Node(2);
    root->right    = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5); 

    cout << "Preorder traversal of binary tree is \n";
    printPreorder(root);

    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root); 

    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);

    return 0;
}

