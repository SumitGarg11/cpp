#include <iostream>
bool isprime(int i){
    if(i<2) return false;
    for(int j = 2; j<i; j++){
        if(i%2==0) return false;
    }
    return true;
}

void printstar(int n){
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=i; j++){
            std::cout<<"*"<<" ";

        }
        std::cout<<std::endl;
    }
}
int main(){
    printstar(5);
    std::cout<<std::endl;
    for(int i = 1; i<100; i++){
        if(isprime(i)){
            std::cout<<i<<" ";
        }
    }
}