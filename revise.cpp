#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};
void insertAthead(Node* &head,Node* &tail, int data){
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    Node* newnode = new Node(data);
    newnode->next = head;
    head = newnode;

}
void insertAtTail(Node* &head,Node* &tail, int data){
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    
    }
    Node* newnode = new Node(data);
    tail->next = newnode;
    tail = newnode;

}
void insertAtpos(Node* &head,Node* &tail,int pos,int data){
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    if(pos == 0){
        insertAthead(head,tail,data);
    }
    int i;
    Node* prev = head;
    while(i<pos){
        prev = prev->next;

    }
    Node* curr = prev;
    Node* newNode = new Node(data);
    newNode->next = curr;
    prev->next =NULL;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* head = NULL;
    Node* tail  = NULL;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int val;
        cin>>val;
        insertAtTail(head,tail,val);
    }
    print(head);

}