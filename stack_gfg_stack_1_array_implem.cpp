#include <iostream>
struct Stack{
    int *arr;
    int top;
    int cap;
    
    
    
    Stack(int c){
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int data);
    int pop();
    int peek();
    bool empty();

};
void Stack::push(int data){
    if(top>=1000-1){
        std::cout<<" stack overflow ";
        return;
    }
    else{
        top++;
        arr[top] = data;
        std::cout<<data<<"pushed on stack"<<std::endl;
        return;
    }
}
int Stack::pop(){
    if(top<0){
        std::cout<<"stack underflow";
        return 0;

    }
    else{
        int x = arr[top];
        top--;
        return x;
    }

}
int Stack::peek(){
    if(top<0){
        std::cout<<"stack is empty";
        return 0;
    }
    else{
        int x = arr[top];
        return x;
    }
}
bool Stack::empty(){
    return(top<0);
}
int main(){
    struct Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    // std::cout<<s.pop()<<"is poped from the stack"<<std::endl;
    std::cout<<"top element is: "<<s.peek()<<std::endl;
    std::cout<<"stack is empty or not"<<s.empty()<<std::endl;
    while(!s.empty()){
        std::cout<<s.peek()<<" ";
        s.pop();
    }
}