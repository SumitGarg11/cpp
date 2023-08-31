#include <iostream>
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertnode(Node* &head,int data){
    Node* newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head = new Node(10);
    insertnode(head,23);
    insertnode(head,89);
    insertnode(head,90);
    print(head);
    return 0;
}