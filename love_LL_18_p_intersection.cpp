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
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* inter(Node* &head1,Node* &head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1 == temp2){
            return temp1;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(temp1 == NULL && temp2 == NULL && temp1 != temp2){
        return NULL;
    }
    if(temp1->next == NULL){
        // temp2 is greater
        int len2=0;
        while(temp2 != NULL){
            len2++;
            temp2=temp2->next;
        }
        while(len2--){
            head2=head2->next;
        }
    }
    else{
        int len1=0;
        while(temp1 != NULL){
            len1++;
            temp1=temp1->next;
        }
        while(len1--){
            head1=head1->next;
        }
    }
    while(head1 != head2){
        head1=head1->next;
        head1=head1->next;
    }
    return head1;

}
int main(){
    Node* head1 = new Node(10);
    Node* second1 = new Node(20);
    Node* third1 = new Node(30);
    Node* fourth1 = new Node(40);
    Node* head2 = new Node(50);
    Node* second2 = new Node(40);
    Node* third2 = new Node(50);
    Node* fourth2 = new Node(40);
    Node* fiv2 = new Node(50);
    Node* comman = new Node(1000);
    Node* c1 = new Node(1001);
    Node* c2 = new Node(1002);


    head1->next=second1;
    second1->next = third1;
    third1->next=fourth1;

    fourth1->next=comman;
    head2->next=second2;
    second2->next=third2;
    third2->next = fourth2;
    fourth2->next= fiv2;
    fiv2->next=comman;
    comman->next=c1;
    c1->next=c2;
    inter(head1,head2);

    
}