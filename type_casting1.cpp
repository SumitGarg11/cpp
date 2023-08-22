#include <iostream>
void print(char a){
    std::cout<<"char: "<<a<<" "<<"ascii value is: "<<static_cast<int>(a);
}

int main(){
    char ch;
    std::cin>>ch;
    print(ch);

    return 0;
}