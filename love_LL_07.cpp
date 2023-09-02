// circular singly linked list 
#include <iostream>
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next= NULL;
    }
    Node(int data){
        this->data=data;
        this->next= NULL;
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
    newnode->next = head;
    head = newnode;
    tail->next=head;

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
void insertAtTail(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        newnode->next=head;
        return;
   }
   Node* newnode = new Node(data);
   tail->next=newnode;
        
    tail = newnode;
    newnode->next=head;
        
    
}
// void insertAtpos(Node* &head,Node* &tail,int data,int pos){
//     if(pos == 1){
//         insertAtHead(head,tail,data);
//         return;
//     }
//     int len = findlength(head);
//     if(pos> len){
//         insertAtTail(head,tail,data);
//         return;
//     }
//     int i = 1;
//     Node* prev = head;
//     while(i<pos-1){
//         prev=prev->next;
//         i++;
//     }
//     Node* curr = prev->next;
//     Node* newnode = new Node(data);
//     newnode->next=curr;
//     prev->next=newnode;
//     newnode->next=head;
//     if(pos == len){
//         tail=newnode;
//     }

// }

void print(Node* &head){
    Node* temp = head;
    if(temp==NULL){
        std::cout<<"LL empty"<<std::endl;
    }
    do {
        std::cout << temp->data << " ";
        temp = temp->next;
    } while ((temp != head));
    std::cout << std::endl;
}


int main(){
    Node* head = NULL;
    Node* tail  = NULL;
    int n;
    std::cin>>n;
    for(int i = 0; i<n; i++){
        int data;
        std::cin>>data;
        insertAtTail(head,tail,data);
    }
    print(head);
    std::cout<<"**************"<<std::endl;
    insertAtHead(head,tail,1000);
    print(head);
    std::cout<<"**************"<<std::endl;
    // insertAtpos(head,tail,1390,2);
    print(head);


    
    
    
    
    
    




    return 0;
}
