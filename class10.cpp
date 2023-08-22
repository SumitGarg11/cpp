#include <iostream>
struct emp{
    char name[10];
    int age;
    int salary;
};

int main(){
    emp e1;
    std::cout<<"enter full name: ";
    std::cin.getline(e1.name,50);
    std::cout<<"enter emp age: ";
    std::cin>>e1.age;
    std::cout<<" salary of emp: ";
    std::cin>>e1.salary;
    std::cout<<" ** Display info of emp **"<<std::endl;
    std::cout<<"Name: "<<e1.name<<std::endl;
    std::cout<<"age: "<<e1.age<<std::endl;
    std::cout<<"salary: "<<e1.salary<<std::endl;
    //************************************
   

    return 0;
}