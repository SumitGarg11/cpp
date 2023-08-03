#include <iostream>
class st{
    public:
    int roll;
    int marks;
};

int main(){
    st obj;
    std::cout<<"roll: ";
    std::cin>>obj.roll;
    std::cout<<"roll: "<<obj.roll;
}