#include<iostream>
int sum1(int n){
    if(n==0){
        return 0;
    }
    return n+sum1(n-1);
}
int main(){
    int n = 3;
    std::cout<<sum1(n);
}