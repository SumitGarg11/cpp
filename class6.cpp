#include <iostream>

// create a class 
class book_info{
    private:
    int book_no;
    char book_name[50];
    public:
    void info(){
        std::cout<<"book no: ";
        std::cin>>book_no;
        std::cout<<"book_name: ";
        std::cin>>book_name;

    }
    void display(){
        std::cout<<"book no: "<<book_no<<std::endl;

        std::cout<<"book name: "<<book_name<<std::endl;
    }
};



int main(){
    // int x  = 50;
    // std::cout<<"x: "<<x;
    book_info obj;
    obj.info();
    obj.display();
    return 0;

}                                                                              