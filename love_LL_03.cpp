// insert at tail 
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
        this->next = NULL;
    }

};
void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    Node* newnode = new Node(data);
    newnode->next = head;
    
    head  = newnode;
}
void insertAtTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newnode = new Node(data);
        head  = newnode;
        tail  = newnode;
    }
    Node* newnode = new Node(data);
    tail->next=newnode;
    
    tail = newnode;
        
    
        
    
    
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,12);
    insertAtHead(head,tail,23);
    insertAtTail(head,tail,77);
    insertAtTail(head,tail,2000);
    insertAtTail(head,tail,1000);
    print(head);

    return 0;
}