#include <bits/stdc++.h>
using namespace std;
#define Size 100
int arr[Size];
int top = -1;
void push(int v){
    if(top == Size -1){
        cout<<"overflow"<<endl;
        return;

    }
    top++;
    arr[top]= v;
    cout<<" Element "<<arr[top]<<"pushed on the stack"<<endl;

}
void pop(){
    if(top == -1){
        cout<<" underflow"<<endl;
        return;
    }
    cout<<"element "<<arr[top]<<"popped on the stack"<<endl;
    top--;
}
void display(){
    if(top == -1){
        cout<<"stack is empty"<<endl;
        return;
    }
    for(int i = top; i>=0; i--){
        cout<<arr[i]<< " ";

    }cout<<endl;
}
int main(){
    int choice;
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
            break;
            default :
            cout<<"invalid ";
        }
    }
}