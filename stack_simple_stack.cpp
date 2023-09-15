#include <iostream>
class stack{
    public:
    int *arr;
    int size;
    int top;
    stack(int size){
        arr=  new int[size];
        top = -1;
        this->size=size;
    }
    void push(int data){

        if(top>size-1){
            std::cout<<"hello";
            std::cout<<"overflow"<<std::endl;
            return;
        }
        else{
            top++;
            arr[top] = data;
        }
    }
    void print(){
        std::cout<<"top: "<<top<<std::endl;
        std::cout<<std::endl;
        for(int i  =  top; i>=0; i--){
            std::cout<<arr[i]<<" ";
        }

    }
};
int main(){
    stack s(5);
    s.push(10);
    s.print();
    s.push(20);
    s.print();
    s.push(30);
    s.print();
    s.push(40);
    s.print();
    s.push(50);
    s.print();
    s.push(60);
    
    s.push(60);
    s.print();

}