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
void insertAthead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail  =newnode;
        return;
    }
    Node* newnode = new Node(data);
    newnode->next=head;
    head=newnode;
}

void insertAtTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail  =newnode;
        return;
    }
    Node* newnode = new Node(data);
    tail->next=newnode;
    tail=newnode;
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
    Node* tail=NULL;
    int n;
    std::cin>>n;
    for(int i = 0; i<n; i++){
        int data;
        std::cin>>data;
        insertAtTail(head,tail,data);
        
    }
    for(int i = 0; i<n; i++){
        int data;
        std::cin>>data;
        insertAtTail(head,tail,data);
        
    }

    
    print(head);
    return 0;
}