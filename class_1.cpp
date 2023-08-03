#include <iostream>
#include <string.h>
int main(){
    char name[50];
    int roll;
    int marks;
    
    std::cout<<"name of student: ";
    std::cin.getline(name,50);
    std::cout<<std::endl;
    
    std::cout<<"roll no of student: ";
    std::cin>>roll;
    std::cout<<std::endl;
   
    std::cout<<"marks of student: ";
    std::cin>>marks;
    std::cout<<std::endl;
    std::cout<<"name of student: "<<name<<std::endl;
    std::cout<<"roll no of student: "<<roll<<std::endl;
    std::cout<<"marks of student: "<<marks<<std::endl;

}