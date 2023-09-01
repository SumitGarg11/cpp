// insert any postion
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
void insertAtHead(Node* head,Node* tail,int data){
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    Node* newnode = new Node(data);
    newnode->next=head;
    head = newnode;
}
void insertAtTail(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return ;
    }
    Node* newnode = new Node(data);
    tail->next=newnode;
    tail = newnode;
}
int findlength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertAtPostion(int data,int pos,Node* &head,Node* &tail){
    if(head==NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return ;
    }
    if(pos==0){
        insertAtHead(head,tail,data);
        return;
    }
    int len = findlength(head);
    if(pos>=len){
        insertAtTail(head,tail,data);
        return;
    }
    //find prev,curr;
    int i = 1; //start from 1 bec. already insert at 0 
    Node* prev = head;
    while(i<pos){
        prev=prev->next;
        i++;
    }
    Node* curr = prev->next;
    Node* newnode = new Node(data);
    newnode->next=curr;
    prev->next=newnode;


}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int n;
    std::cout<<"how many node want:";
    std::cin>>n;
    for(int i = 0; i<n; i++){
        int data;
        std::cin>>data;
        insertAtTail(head,tail,data);
    }
    std::cout<<"linked list: ";
    print(head);
    std::cout<<std::endl;
    std::cout<<"head: "<<head->data<<std::endl;
    std::cout<<"tail: "<<tail->data<<std::endl;
    insertAtPostion(1000,3,head,tail);
    std::cout<<"after printing the linked list: "<<std::endl;
    
    print(head);
    std::cout<<"head: "<<head->data<<std::endl;
    std::cout<<"tail: "<<tail->data<<std::endl;



    return 0;
}