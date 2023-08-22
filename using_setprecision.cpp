#include <iomanip>
#include <iostream>

int main(){
    double d{0.1};
    std::cout<<d<<'\n';
    std::cout<<std::setprecision(17);
    std::cout<<"d = "<<d<<'\n';
    



    float s(1.0);
    std::cout<<s<<'\n';
    std::cout<<std::setprecision(5);
    std::cout<<"s: "<<s<<'\n';
}