# include <iostream>
class student{
    char name[10];
    int rollno;
    public :
    int c;
    void getdata(){
        std::cout<<"enter the name: ";
        std::cin>>name;
        std::cout<<"enter rollno: ";
        std::cin>>rollno;
    }
    void display(){
        std::cout<<"enter the name: "<<name<<std::endl;
        std::cout<<"enter the rollno: "<<rollno<<std::endl;
    }
};
int main(){
    int n;
    std::cout<<"how many data you want : "<<std::endl;
    std::cin>>n;
    student obj[n];
    std::cout<<"c: "<<obj.c;

    for(int i = 0; i<n; i++){
        std::cout<<"enter record: "<<i+1<<std::endl;
        obj[i].getdata();


    }
    for(int i = 0; i<n; i++){
        std::cout<<"record: "<<i+1<<std::endl;
        obj[i].display();


    }

    return 0;
}