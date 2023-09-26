#include <iostream>

int a = 10;
int b = 10;
void fun(){
    a=  80;
}

void fun1(){
     int b = 30; // different make a memory 
}
int main(){

    fun();
    std::cout<<"Global variable change "<<a<<std::endl;
    fun1();
    std::cout<<"b: "<<b;
    return 0;
    

}