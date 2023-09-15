// reverse the Node
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
Node* reverse_node(Node* &prev,Node* &curr){
    // condition 
    if(curr == NULL){
        return prev;
    }
    // single case 
    Node* forward = curr->next;
    curr->next = prev;
    // rescurion solve the case:
    return reverse_node(curr,forward);
    
}
Node* reverse_with_loop(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    while(curr != NULL){
        forward= curr->next;
        curr->next = prev;
        prev=curr;
        curr = forward;
    }
    return prev;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int n;
    std::cin>>n;
    for(int i =0; i<n; i++){
        int data;
        std::cin>>data;
        insertAtTail(head,tail,data);
    }
    std::cout<<"LL is: ";
    print(head);
    std::cout<<std::endl;
    Node* prev = NULL;
    Node* curr = head;
    head = reverse_node(prev,curr);
    std::cout<<"LL is reverse: ";
    print(head);
    std::cout<<std::endl;
    head=reverse_with_loop(head);
    print(head);
}