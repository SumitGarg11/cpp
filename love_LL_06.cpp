// double linked list;
#include <iostream>
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
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
    ~Node(){
        std::cout<<" node with value: "<<this->data<<" deleted"<<std::endl;
    }

};
void insertathead(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    Node* newnode = new Node(data);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
int findlength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        
        temp = temp->next;
        len++;
    }
    return len;
}




void insertAtTail(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
   }
   Node* newnode = new Node(data);
   tail->next=newnode;
        newnode->prev = tail;
        tail = newnode;
    
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void insertAtpostion(int pos,int data,Node* &head,Node* &tail){
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    if(pos == 1){
        insertathead(head,tail,data);
        return;
    }
    int len = findlength(head);
    if(pos>=len){
       insertAtTail(head,tail,data);
       return;
    }
     int i = 1; 
        Node* prevnode = head;
        while(i<pos-1){
            prevnode= prevnode->next;
            i++;
        }
        Node* curr = prevnode->next;
        Node* newnode = new Node(data);
        prevnode->next = newnode;
        newnode->prev=prevnode;
        curr->prev = newnode;
        newnode->next = curr;
    
}
void deletenode(Node* &head,Node* &tail,int pos){
    if(head==NULL){
        std::cout<<"LL is empty"<<std::endl;
        return;
    }
    if(head->next == NULL){
        Node* temp = head;
        head = NULL;
        tail= NULL;
        delete temp;
        return;
    }
    if(pos == 1){
        Node* temp = head;
        head= head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    // delete at last
    int len = findlength(head);
    if(pos==len){
        Node* temp = tail;
        tail= tail->prev;
        tail->prev=NULL;
        tail->next = NULL;
        delete temp;
        return;
    }
    int i = 1;
    Node* left = head;
    while(i<pos-1){
        left=left->next;
        i++;
    }
    Node* curr = left->next;
    Node* right = curr->next;
    left->next= right;
    right->prev=left;
    curr->prev = NULL;
    curr->next=NULL;
    delete curr;

}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int n;
    std::cin>>n;
    for(int i=0; i<n; i++){
        int data;
        std::cin>>data;
        insertathead(head,tail,data);
    }
    
    std::cout<<std::endl;
    // insertAtTail(head,tail,1000);
    // insertAtpostion(3,100,head,tail);
    print(head);
    std::cout<<std::endl;
    deletenode(head,tail,5);
    print(head);
    return 0;
}