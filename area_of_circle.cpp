#include <iostream>
class areaOfCircle{
    public:
    double r;
    double areaofcircle(){
        return 3.14*r*r;
    }
};

int main(){
    areaOfCircle obj;
    std::cout<<"radius: ";
    std::cin>>obj.r;
    std::cout<<std::endl;
    std::cout<<"Area of circle: "<<obj.areaofcircle()<<std::endl;
    return 0;
}