// find loop or not 
// 12 -> 13 -> 15 -> 16 -> 17 -> 18 -> 19 -> 20 -> 30 
//                                      ^            ^
//                                    / loop is present|
//                                  80   <-  <-   <-  70


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
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
}
bool checkLoopPresent(Node* &head){
    if(head == NULL){
        std::cout<<" LL empty:"<<std::endl;
        return false;
    }
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL){
        fast=fast->next;
        if(fast != NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow == fast){
            return true;
        }
    }
    return false;
}
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* six = new Node(40);
    Node* seven = new Node(50);
    Node* eight = new Node(40);
    Node* nine = new Node(50);

    head->next=second;
    second->next = third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=six;
    six->next=seven;
    seven->next = eight;
    eight->next= nine;
    nine->next=fifth;
    std::cout<<"loop is present : 1 or loop is not present : 0 "<<" ans is "<< checkLoopPresent(head)<<std::endl;

    // print(head);   


}