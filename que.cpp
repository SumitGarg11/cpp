#include <iostream>
int main(){
    int n1,n2;
    std::cin>>n1>>n2;
    for(int i = 1; i<n2; i++){
        if(4*i<=n2){
            std::cout<<4*i<<" ";
        }
    }
}