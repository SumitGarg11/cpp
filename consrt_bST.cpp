#include <iostream>
#include <cstdlib>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};
void infun(struct Node *root){
    if(root == NULL) return;
    infun(root->left);
    cout<<root->data<<" ";
    infun(root->right);
    
}
void add_node(struct Node **root, int val){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    
    if(*root == NULL){
        *root = newnode;
        return;
    }
    struct Node *temp = *root;
    while(1){
        if(temp->data > val){
            if(temp->left == NULL){
                temp->left = newnode;
                return;
            }
            temp=temp->left;
        }
        else{
            if(temp->right == NULL){
                temp->right = newnode;
                return;
            }
            temp=temp->right;
        }
    }
    return;
}
struct Node* findmin(struct Node *root){
    if(root->left == NULL) return root;
    return findmin(root->left);
}
struct Node *deletenode(struct Node *root, int val){
    if(root == NULL){
        cout<<"element not found";
        return NULL;
    }
    else if (val < root->data){
        root->left = deletenode(root->left, val);
        
    }
    else if (root->data<val){
        root->right = deletenode(root->right, val);
    }
    else{
        if(root->left == NULL && root->right == NULL){
            root=NULL;
        }
        else if(root->left == NULL){
            root=root->right;
        }
        else if(root->right == NULL){
            root = root->left;
        }
        else {
            struct Node *temp = findmin(root->right);
            root->data=temp->data;
            root->right = deletenode(root->right,temp->data);
            
        }
    }
    return root;
    
}
int main(){
    struct Node *root  = NULL;
    struct Node *del = NULL;
    int n,val,element;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>val;
        add_node(&root,val);
    }
    cin>>element;
    infun(root);
    cout<<endl;
    del = deletenode(root, element);
    infun(root);
    
}
