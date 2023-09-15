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
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void duplicate(Node* head){
    Node* temp1 = head;
    Node* temp2 = head->next;
    while(temp2 != NULL){
        if((temp1 != NULL) && temp1->data == temp2->data){
            Node* curr = temp2;
            temp2 = temp2->next;
            curr->next = NULL;
            temp1->next = temp2;
            temp1->next = temp1->next->next;
            temp2 = temp2->next;

        }
    }
    print(head);
    
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
    duplicate(head);
    
}