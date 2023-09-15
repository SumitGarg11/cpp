// // adda the LL
// 2 -> 4
// 2 -> 3 -> 4
// add
//   24
// +234
// =258
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
Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev=curr;
        curr=forward;
    }
    return prev;

}
Node* solve(Node* &head1,Node* &head2){
    head1 = reverse(head1);
    head2 = reverse(head2);
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    int carry = 0;
    
    while(head1 != NULL && head2 != NULL){
        
        int sum = carry + head1 -> data + head2 -> data;
        int digit = sum%10;
        carry = sum/10;
        Node* newnode = new Node(digit);
        if(ansHead == NULL){
            ansHead = newnode;
            ansTail = newnode;
        }
        else{
            ansTail->next=newnode;
            ansTail = newnode;
        }
        head1=head1->next;
        head2=head2->next;
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
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;
    int n1;
    std::cout<<"node for LL1: ";
    std::cin>>n1;
    int n2;
    std::cout<<"node for LL2: ";
    std::cin>>n2;
    std::cout<<"value first LL: ";
    for(int i = 0; i<n1; i++){
        int data;
        std::cin>>data;
        insertAtTail(head1,tail1,data);
    }
    std::cout<<"value second LL: ";
    

    
    for(int i = 0; i<n2; i++){
        int data;
        std::cin>>data;
        insertAtTail(head2,tail2,data);
    }
    std::cout<<"first LL: ";
    print(head1);
    std::cout<<std::endl;
    std::cout<<"second LL: ";
    print(head2);
    Node* ans = solve(head1,head2);
    print(ans);
    std::cout<<std::endl;
    std::cout<<"reverse first LL: ";
    print(head1);
    std::cout<<std::endl;
    std::cout<<"reverse second LL: ";
    print(head2);



}