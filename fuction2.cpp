#include <iostream>
int getvaluefromuser(){
    std::cout<< " enter an int: ";
    int input{};
    std::cin>>input;
    return input;
}
int main(){
    int num {getvaluefromuser()};
    std::cout <<num <<"doubled is: "<<num *2 << std::endl;
    return 0;
}