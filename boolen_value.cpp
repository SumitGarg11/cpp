#include <iostream>


bool isequal(int x,int y){
    return (x==y);
}



int main(){
    // bool b{};
    // std::cout<<"enter a boolean value: ";
    // std::cin>>b;
    // std::cout <<" you entered: "<< b <<'\n';

    // output :
    // Enter a Boolean value: true
    // You entered: 0


    // std::cout<<"another program"<<std::endl;
    // bool s{};
    // std::cout <<"enter a boolean value: ";
    // std::cin >> std::boolalpha;
    // std::cin >> s;
    // std::cout <<"You entered: "<<b<<'\n';



    // std::cout<<"another program: "<<std::endl;



    std::cout<<"enter an int: ";
    int x{};
    std::cin>>x;
    std::cout<<"enter another num: ";
    int y{};
    std::cin>>y;

    std::cout<< std::boolalpha;

    std::cout<<x<<"and " <<y<<"are equal?";
    std::cout<<isequal(x,y);
}