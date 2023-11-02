#include <bits/stdc++.h>
using namespace std;
#define SIZE 100
int arr[SIZE];
int top = -1;
void push(int val){
    if(top == SIZE -1){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    top++;
    arr[top] = val;
    cout<<"element "<<arr[top]<<"pushed onto stack"<<endl;
   
}
void pop(){
    if(top == -1){
        cout<<"overflow"<<endl;
        return;
    }
    cout<<"element "<<arr[top]<<"poped on stack"<<endl;
    top--;
}
void display(){
    if(top == -1){
        cout<<"stack is empty"<<endl;
        return;
    }
    cout<<"element in the stack: ";
    for(int i =top; i>=0; i--){
        cout<<arr[i]<<" ";
    } cout<<endl;
}
int main(){
    int choice;
    int value;
    while(1){
        cin>>choice;
        switch(choice){
            case 1: cin>>value;
            push(value);
            break;
            case 2: pop();
            break;
            case 3: 
            display();
            break;
            case 4:
            cout<<"exit the program"<<endl;
            exit(0);
            break;
            default : cout<<"Invalid choice "<<endl;

        }
    }
}
