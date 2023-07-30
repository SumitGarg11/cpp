#include <iostream>
int main(){
    int n;
    std:: cin >> n;
    if(n<10){
        std:: cout<< "n is  less than 10: " <<std:: endl;

    }else{
        std::cout<< "n is graeter than 10 "<< std::endl;
    }
    int a,b;
    std::cout <<"value of a and b is: ";
    std::cin >> a >> b;
    if(a>b){
        std::cout<<"a is greater than b and a = "<<a<<std::endl;
    }
    else{
        std::cout<<"b is grater than a and b is "<<b<<std::endl;
    }
    return 0;

}