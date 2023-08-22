#include <iostream>
#include <math.h>
int main(){
    int n;
    int temp ;
    int rem;
    int decimal1 = 0;
    int i = 0;
    std::cin>>n;
    temp = n;
    while(temp>0){
        rem = temp%10;
        decimal1 = decimal1+rem * pow(2,i);
        i++;
        temp = temp/10;
    }
    std::cout<<"Decimal: "<<decimal1;
    return 0;

}