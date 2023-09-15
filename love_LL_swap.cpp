#include<iostream>
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
void insertAtTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    Node* newnode = new Node(data);
    tail->next = newnode;
    tail = newnode;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* swap_ll(Node* &head){
    if(head != NULL && head->next != NULL){
        std::swap(head->data,head->next->data);
        swap_ll(head->next->next);
    }
    return head;
    
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int n;
    std::cin>>n;
    for(int i = 0; i<n; i++){
        int d;
        std::cin>>d;
        insertAtTail(head,tail,d);
    }
    print(head);
    swap_ll(head);
    std::cout<<"up __ LL: "<<std::endl;
    print(head);
}