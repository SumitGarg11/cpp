#include <iostream>
#define a 10
#define sss 29
#define true false
#define sumit cout
int main(){
    // int b = 20;
    // b = a;
    // bool found  = true ;
    // std::sumit<<a<<std::endl;
    // std::sumit<<sss<<std::endl;
    // std::sumit<<b<<std::endl;
    // std::sumit<<found<<std::endl; // true replace to false with the help of using macro 


    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=i; j++){
            std::cout<<"*"<<" ";
        }
        std::cout<<std::endl;
    }
    for(int i = 6; i>=1; i--){
        for(int j = 1; j<=i; j++){
            std::cout<<"*"<<" ";
        }
        std::cout<<std::endl;
    }


}