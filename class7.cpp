#include <iostream>
// create a class 
class st_info{
    private:
    int roll;
    int marks;
    char name[50];

    // create a forward defination
    public:
    void info();
    void display();
    
}; //close class

// ************ outside the class function defination ****************

void st_info:: info(){          // using the scope resulation operator ( :: )
    std::cout<<"roll no: ";
    std::cin>>roll;
}

void st_info :: display(){
    std::cout<<"roll no: "<<roll;
    
}
int main(){
    // create a obj
    st_info obj;
    // called a function
    obj.info();
    obj.display();
    return 0;
}