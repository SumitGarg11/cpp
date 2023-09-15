// #include <iostream>
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
    


// };
// void insertAthead(Node* &head,Node* &tail,int data){
//     if(head==NULL){
//         Node* newnode = new Node(data);
//         head = newnode;
//         tail  =newnode;
//         return;
//     }
//     Node* newnode = new Node(data);
//     newnode->next=head;
//     head=newnode;
// }

// void insertAtTail(Node* &head,Node* &tail,int data){
//     if(head==NULL){
//         Node* newnode = new Node(data);
//         head = newnode;
//         tail  =newnode;
//         return;
//     }
//     Node* newnode = new Node(data);
//     tail->next=newnode;
//     tail=newnode;
// }
// void print(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         std::cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }
// int main(){
//     Node* head = NULL;
//     Node* tail=NULL;
//     int n;
//     std::cin>>n;
//     for(int i = 0; i<n; i++){
//         int data;
//         std::cin>>data;
//         insertAtTail(head,tail,data);
        
//     }
//     for(int i = 0; i<n; i++){
//         int data;
//         std::cin>>data;
//         insertAtTail(head,tail,data);
        
//     }

    
//     print(head);
//     return 0;
// }


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
    ~Node(){
        std::cout<<"node with value: "<<this->data<<" deleted "<<std::endl;
    }

};
void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
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
    if(head==NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    Node* newnode = new Node(data);
    newnode->next=tail;
    tail = newnode;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int findlength(Node* &head){
    int len  =0 ;
    Node* temp = head;
    while(temp != NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void deleteNode(int pos,Node* &head,Node* &tail){
    if(head == NULL){
        std::cout<<"sory LL is empty";
        return;
    }
    // delete at head
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    int len = findlength(head);
    // delete at last
    if(pos == len){
       // find prev
       Node* prev  = head;
       int i = 1;
       while(i<pos-1){
        prev=prev->next;
        i++;
       }
       prev->next = NULL;
       Node* temp = tail;
       tail= prev;
       delete temp;
       return; 
    }
    // delete middle
    
    int i = 1;
    Node* prev = head;
    while(i<pos-1){
        prev=prev->next;
        i++;
    }
    Node* curr = prev->next;
    prev->next=curr->next;
    curr->next = NULL;
    delete curr;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int n;
    std::cout<<"how many node wants: ";
    std::cin>>n;
    for(int i=0;i<n; i++){
        int data;
        std::cin>>data;
        insertAtHead(head,tail,data);
    }
    print(head);
    std::cout<<std::endl;
    deleteNode(1,head,tail);
    print(head);
    return 0;
}