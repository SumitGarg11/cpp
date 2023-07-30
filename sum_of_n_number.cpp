#include <iostream>
int main(){
    int n;
    
    std::cin >> n;
    int i = 1;
    int sum1 = 0;
    
    while(i<=n){
        sum1 = sum1 + i;
        i++;
    }
    std::cout<<"value of sum" << sum1<<std::endl;

}