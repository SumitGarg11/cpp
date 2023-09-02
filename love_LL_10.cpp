// reverse LL
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
int  findlength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        
        temp=temp->next;
        len++;
    }
    return len;
}
Node* reverseKNode(Node* &head,int k){
    if(head == NULL){
        std::cout<<" LL is empty"<<std::endl;
        return NULL;
    }

    int len = findlength(head);
    if(k>len){
        std::cout<<"please enter valid value for k"<<std::endl;
        return head;
    }
    // step1:
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    int count = 0;
    while(count<k){
        forward = curr->next;
        curr->next=prev;
        prev = curr;
        curr= forward;
        count++;
    }
    // step 2: check we haves node or not on the right hand of forward
    if(forward != NULL){
        head->next= reverseKNode(forward,k);

    }
    return prev;

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
    std::cout<<"LL is without reverse : ";
    print(head);
    std::cout<<std::endl;
    head=reverseKNode(head,3);
    std::cout<<"LL is reverse : ";
    print(head);


    return 0;
}