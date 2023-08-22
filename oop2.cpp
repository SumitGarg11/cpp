#include <iostream>
using namespace std;
class class_name{
    private:
    int rollno;
    std::string s;
    public:
    int getclass_nameRollno(){
        return rollno;
    }
    string getclass_nameName(){
        return s;
    }
    void setclass_nameRollno(int rollno){
        this->rollno = rollno;
    }
    void setclass_nameName(string s){
        this->s = s;
    }


    
};
int main(){
    class_name obj;
    obj.setclass_nameRollno(90);
    obj.setclass_nameName("sumit");
    std::cout<<"rollno: "<<obj.getclass_nameRollno()<<std::endl;
    std::cout<<"Name: "<<obj.getclass_nameName()<<std::endl;

}