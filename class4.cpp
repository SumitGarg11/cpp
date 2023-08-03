#include <iostream>
class info_s{
    public:
    void info_student(){
    char name[50];
    int reg;
    int phn;
    std::cout<<"name: ";
    std::cin.getline(name,50);
    std::cout<<"name: "<<name;
    }
};

int main(){
    info_s obj;
    obj.info_student();
    

}