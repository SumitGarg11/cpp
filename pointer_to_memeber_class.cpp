#include <iostream>
class X{
    public:
    int a;
    void f(int b){
        std::cout<<"the value of b "<<b<<std::endl;
    }
};
int main(){
    // declare pointer to data member
    int X::*ptiptr = &X::a;
    //declare a pointer to member function 
    void(X::*ptfptr)(int) = &X::f;
    // create an object of class type x
    X obj;
    obj.*ptiptr = 10;
    std::cout<<"value of a "<<obj.*ptiptr<<std::endl;
    (obj.*ptfptr)(20);
}