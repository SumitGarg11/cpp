// find middle node ;
// using slow fast 
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
    Node* temp  = head;
    while(temp != NULL){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* getMiddle(Node* &head) {
        if(head == NULL) {
                std::cout << "LL is empty" << std::endl;
                return head;
        }
        if(head -> next == NULL) {
                //only 1 node in LL
                return head;
        }

        // LL have > 1 node
        Node* slow = head;
        Node* fast = head;

        while(slow != NULL && fast != NULL) {
                fast = fast -> next;
                if(fast != NULL) {
                        fast = fast -> next;
                        slow = slow -> next;

                }
                
        }
        return slow;
}
int main(){
    // Node* head = NULL;
    // Node* tail = NULL;
    // int n;
    // std::cin>>n;
    // for(int i =0; i<n; i++){
    //     int data;
    //     std::cin>>data;
    //     insertAtTail(head,tail,data);
    // }
    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);
    Node* fifth = new Node(50);
    head->next=first;
    first->next=second;
    second->next= third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    

    std::cout<<" LL is : ";
    print(head);
    std::cout<<std::endl;
    std::cout<<"Middle node : "<<getMiddle(head)->data<<std::endl;

    
    return 0;
}