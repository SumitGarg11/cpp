#include <iostream>
#include <stdio.h>
union number{
    int n;
    int a;

};
int main(){
    number u;
    std::cout<<"enter the value of n: ";
    std::cin>>u.n;
    std::cout<<"enter the value of a: ";
    std::cin>>u.a;
    std::cout<<"*****display data *****"<<std::endl;
    std::cout<<"enter the value of n: "<<u.n<<" "<<"enter the value of a: "<<u.a<<std::endl;
   

    return 0;
}