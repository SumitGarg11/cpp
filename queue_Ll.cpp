#include <iostream>
using namespace std;
#define size 100
int arr[size];
int front =0;
int rear =0;
void push(int v){
    if(rear == size){
        cout<<" overflow"<<endl;
    }
    arr[rear]= v;
    cout<<"element"<<arr[rear]<<"pushed on queue"<<endl;
    rear++;
}
void pop(){
    if(front == rear){
        cout<<"underflow"<<endl;
    }
    
    cout<<"ele"<<arr[front]<<"poped on the queue"<<endl;;

    front++;
    if(front == rear){
        front = 0;
        rear = 0;
    }
}
void display(){
    if(rear == front){
        cout<<"queue is empty"<<endl;
    }
    for(int i = 0; i<rear; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int main(){
    int choice ;
    int val;
    while(1){
        cin>>choice;
        switch(choice){
            case 1: cin>>val;
            push(val);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default: cout<<"invalid"<<endl;

        }
    }
}