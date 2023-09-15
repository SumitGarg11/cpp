#include <iostream>
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data= data;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head,Node* &tail,int data){
    Node* newnode = new Node(data);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
    
}
void insertAtail(Node* &head,Node* &tail,int data){
    Node* newnode = new Node(data);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        
        return;
    }
    tail->next = newnode;
    
    tail = newnode;

}
void del(Node* head,Node* &tail,int position){
     int i = 1;
                Node* prev = head;
                while(i < position - 1) {
                        prev = prev->next;
                        i++;
                }
                //step2:
                prev->next = NULL;
                //step3:
                Node* temp = tail;
                //step4:
                tail = prev;
                //step5:
                delete temp;
                return;
}

void print(Node* &head){
    Node* temp = head;
    // if(temp == NULL){
    //     std::cout<<"LL";
    //     return;
    // }
    // do{
    //     std::cout<<temp->data<<" ";
    //     temp=temp->next;
    // }while(temp != head);
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
    int d;
    std::cin>>d;
    insertAtHead(head,tail,d);
}
insertAtail(head,tail,11);
print(head);
del(head,tail,n+1);
std::cout<<std::endl;
print(head);
// d(head,tail,n);
// std::cout<<std::endl;
// print(head);
}