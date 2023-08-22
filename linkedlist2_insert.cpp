#include <iostream>
class node{
    public:
    int data;
    node* next_add;
    node(int data){
        this->data=data;
        this->next_add=NULL;
    }


};
void insertAtHead(node* &head,int d){
    node* temp = new node(d);
    temp -> next_add = head;
    head  = temp;
}
void print(node* &head){
    node* temp = head;
    while( temp != NULL){
        std::cout<<temp -> data<<" ";
        temp = temp -> next_add;
    }
    std::cout<<std::endl;
}


int main(){
    node* obj = new node(10);
    std::cout<<"data: "<<obj->data<<std::endl;
    std::cout<<"next_add: "<<obj->next_add<<std::endl;

    node* head = obj;
    print(head);
   
    
    insertAtHead(head,12);
    
    
    print(head);
}