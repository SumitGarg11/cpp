#include<iostream>
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }

};
void insertAtTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        newnode->next=head;
        return;
    }
    Node* newnode = new Node(data);
    tail->next = newnode;
    newnode->prev=tail;
    tail = newnode;
    newnode->next=head;
}
void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        
        return;
    }
    Node* newnode = new Node(data);
    newnode->next = head;
    newnode->prev=head;
    head = newnode;
    tail->next=head;
}
void print(Node* &head){
    Node* temp = head;
    if(temp == NULL){
        std::cout<<"LL is empty"<<std::endl;  
    }
    do{
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp != head);

}
int main(){
     Node* head = NULL;
    Node* tail = NULL;
    int n;
    std::cin>>n;
    for(int i = 0;i<n; i++){
        int data;
        std::cin>>data;
        insertAtHead(head,tail,data);
    }
    std::cout<<"simple linked list: ";
    print(head);
   
}