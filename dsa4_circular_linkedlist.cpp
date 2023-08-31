#include <iostream>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head,*newnode,*temp;
    head = 0;
    int choice  = 1;
    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        std::cout<<"enter data: ";
        std::cin >> newnode->data;
        newnode -> next = 0;
        if(head == 0){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        temp -> next = head;
        std::cout<<"do you want to continue (0,1)?";
        std::cin >>choice;
    }    

        temp = head;
        while(temp->next!=head){
            std::cout<<temp->data<<" ";
            temp = temp->next;

        }
        std::cout<<temp->data;
        return 0;

        
}