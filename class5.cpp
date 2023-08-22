#include <iostream>
class course{
    // inside class, member of class ascess the same class of variable
    char course_name[50];
    int year;
    public:
    void info_course();
};
void course::info_course(){
    std::cout<<"course name of student: ";
    std::cin.getline(course_name,50);
    std::cout<<"course name of student:"<<course_name<<std::endl;
    std::cout<<"year of student: ";
    std::cin>>year;
    std::cout<<"Year of student: "<<year<<std::endl;
}



int main(){
    course obj;
    obj.info_course();
    return 0;

}