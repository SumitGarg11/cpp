#include <iostream>
class student{
    char name[5];
    int rollno;
    public:
    void getdata(){
        std::cout<<"enter name: ";
        std::cin>>name;
        
        std::cout<<"rollno: ";
        std::cin>>rollno;
    }
    void display(){
        std::cout<<name<<std::endl;
        std::cout<<rollno<<std::endl;
    }
};
int main(){
    std::cout<<"how many records do you want :";
    int n;
    std::cin>>n;
    student obj[n];
    for(int i = 0; i<n; i++){
        std::cout<<"enter record: "<<i+1<<std::endl;
        obj[i].getdata();
        std::cout<<std::endl;
    }
    for(int i = 0; i<n; i++){
        std::cout<<"record: "<<i+1<<"is"<<std::endl;
        obj[i].display();
    }

    return 0;
}