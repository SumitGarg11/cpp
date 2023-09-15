#include <iostream>
struct  s{
    public:
    int n;
    char p[20];
};
int main(){
    s obj;
    std::cin>>obj.n;
    std::cin >> obj.p;
    std::cout<<"age: "<<obj.n<<std::endl;
    std::cout<<"dob: "<<obj.p<<std::endl;

}