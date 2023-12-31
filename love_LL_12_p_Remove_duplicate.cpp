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
void insertAtTail(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    Node* newnode = new Node(data);
    tail->next= newnode;
    tail=newnode;

}
void remove_duplicate(Node* &head){
    Node* curr = head;
    if(head == NULL){
        std::cout<<"LL is khali "<<std::endl;
        return;
    }
    if(head->next == NULL){
        std::cout<<"sLL "<<std::endl;
        return;
    }
    while(curr != NULL){
        Node* temp = curr->next;
        if((curr->next != NULL) && (curr->data == curr->next->data)){
            temp->next= NULL;

            curr->next=curr->next->next;
            delete temp;
            
    }
    else{
        curr= curr->next;
    }
    

}

    
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
    std::cin>>n;
    for(int i = 0; i<n; i++){
        int data;
        std::cin>>data;
        insertAtTail(head,tail,data);
    }
    print(head);
    std::cout<<std::endl;
    remove_duplicate(head);
    print(head);
    return 0;
}