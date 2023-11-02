#include <bits/stdc++.h>
using namespace std;
#define size 100
int arr[size];
int top = -1;
void push(int val){
    if(top == size -1){
        cout<<"overflow"<<endl;
        return;
    }
    top++;
    arr[top] = val;
    cout<<"element"<<arr[top]<<" pushed on the stack"<<endl;
}
void pop(){
    if(top == -1){
        cout<<"underflow"<<endl;
        return;
    }
    top--;
    cout<<"element"<<arr[top]<<" pop on the stack"<<endl;
}
void display(){
    if(top == -1){
        cout<<"stack is e"<<endl;
        return;
    }
    for(int i = top; i>=0; i--){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int main(){
    int ch;
    int v;
    while(1){
        cin>>ch;
        switch(ch){
            case 1: cin>>v;
            push(v);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
        }
    }
}