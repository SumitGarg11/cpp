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

Node* MiddleNode(Node* &head){
    if(head == NULL){
        std::cout<<"LL is empty"<<std::endl;
        return head;
    }
    if(head->next == NULL){
        
        return head;
    }
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL){
        fast=fast->next;
        if(fast != NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}
int findlength(Node* &head){
    int len  = 0;
    Node* temp = head;
    while(temp != NULL){
        temp= temp->next;
        len++;
    }
    return len;
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
        int len = findlength(head); 
        Node* slow = head;
        if(len%2==0){
        
        Node* fast = head->next;
        while(slow != NULL && fast != NULL) {
                fast = fast -> next;
                if(fast != NULL) {
                        fast = fast -> next;
                        slow = slow -> next;
                }
        }
        }
        else{
        Node* fast = head;
        while(slow != NULL && fast != NULL) {
                fast = fast -> next;
                if(fast != NULL) {
                        fast = fast -> next;
                        slow = slow -> next;
                }
        }
        }
        

        
        return slow;
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
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* fourth = new Node(40);
    // Node* fifth = new Node(50);
    // head->next=second;
    // second->next = third;
    // third->next=fourth;
    // fourth->next=fifth;
    // fifth->next=NULL;
    std::cout<<"LL is : ";
    print(head);
    std::cout<<std::endl;
    std::cout<<" Middle of the node is : "<<MiddleNode(head)->data<<std::endl;
    std::cout<<"Middle node : "<<getMiddle(head)->data<<std::endl;
    return 0;

}