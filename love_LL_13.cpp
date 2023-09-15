// sort LL ,LL contain 0,1,2;
// input : 0 2 2 1 0 2 0 0 1
// output : 0 0 0 0 1 1 2 2 2
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
void sortzeroonetwo(Node* &head){
    
    int one = 0;
    int two = 0;
    int zero = 0;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0)
            zero++;
        
        else if(temp->data == 1)
            one++;
        
        else if(temp->data == 2)
            two++;
        
        temp= temp->next;

    }
    temp = head;
    while(temp != NULL){
    while(zero--){
        temp->data=0;
        temp=temp->next;
    }
    while(one--){
        temp->data=1;
        temp=temp->next;
    }
    while(two--){
        temp->data=2;
        temp=temp->next;
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
    std::cout<<"input : ";
    print(head);
    std::cout<<std::endl;
    sortzeroonetwo(head);
    std::cout<<"output: ";
    print(head);
}