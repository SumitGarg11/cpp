#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next = NULL;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class Stack{
    public:
    Node* top;
    Stack(){
        top = NULL;
    }
    void push(int data){
        Node* newnode = new Node(data);
        if(!newnode){
            std::cout<<" stack over flow";
            exit(1);
        }
        newnode->data= data;
        newnode->next= top;
        top = newnode;
    }
    bool empty(){
        return top == NULL;
    }
    int peek(){
        if(!empty()){
            return top->data;
        }
        exit(1);
    }
    void pop(){
        Node* temp;
        if(top == NULL){
            std::cout<<"stack underflow"<<std::endl;
        }
        else{
            temp=top;
            top = top->next;
            free(temp);
        }
    }
    void print(){
        Node* temp;
        if(top == NULL){
            std::cout<<"stck is empty";
            exit(1);
        }
        else{
            temp = top;
            while(temp != NULL){
                std::cout<<temp->data;
                temp=temp->next;
                if(temp != NULL){
                    std::cout<<" -> ";
                }
            }
        }
    }
};
int main(){
    Stack s;
    s.push(11);
    s.push(20);
    s.push(70);
    s.print();
    std::cout<<s.peek()<<std::endl;

}