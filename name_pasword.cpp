#include <iostream>
#include <string>
#include <bits/stdc++.h>
int main(){
    std::string name;
    std::getline(std::cin,name);
    size_t space = name.find(' ');
    std::string un = name.substr(0,space);
    std::string pa = name.substr(space+1);
    std::cout<<"username: "<<un<<std::endl;
    std::cout<<"password: "<<pa<<std::endl;

    
    return 0;
}