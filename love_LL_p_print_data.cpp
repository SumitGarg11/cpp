// print the data of given pos in LL;
#include<iostream>
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
void print_data_pos(Node* &head,int k){
    Node* temp = head;
    int i = 0;
    while(temp != NULL){
        if(i == k){
            std::cout<<"data of LL at given pos: "<<temp->data<<std::endl;
            return;
        }
        temp=temp->next;
        i++;
    }
    std::cout<<"postion: "<<k<<"out of range"<<std::endl;
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
    for(int i = 0;i<n; i++){
        int data;
        std::cin>>data;
        insertAtTail(head,tail,data);
    }
    std::cout<<"LL: ";
    print(head);
    std::cout<<std::endl;
    int pos =3;

    print_data_pos(head,pos -1);
    std::cout<<std::endl;
    std::cout<<"LL: ";
    print(head);

}
