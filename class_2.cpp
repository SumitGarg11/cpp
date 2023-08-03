#include <iostream>

int sumn(int n){
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum = sum + i;
    }
    return sum;
}
int main(){
    int n;
    std::cout<<"n: ";
    std::cin>>n;
    
    int sumNaturalNumber = sumn(n);
    std::cout<<"sum of 10 natural number: "<< sumNaturalNumber<<std::endl;
    return 0;
}