// The iostream library contains a few predefined variables 
// for us to use. One of the most useful is std::cout, 
// which allows us to send data to the console to be printed 
// as text. *****cout stands for “character output”.*****

#include <iostream>

int main(){
    int a{7},b(8);
    int s,r;
    std::cout<<"enter the value of s and r" << std::endl;
    std::cout << "hello guys" << '\n';
    std::cin >> s >> r;
    int size = sizeof(a);
    std::cout << "the size of a is : " << size << std::endl;
    
    std::cout << "the value of a: " << a << std::endl << "the value of b: " << b;
    return 0;
}

