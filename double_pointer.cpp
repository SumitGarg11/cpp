#include <iostream>
void update(int **p){
    p = p+1; //no change;
}
int main(){
    int i = 3;
    int *p = &i;
    int **p1 = &p;
    std::cout<<"&i: "<<&i<<std::endl;
    std::cout<<*p<<std::endl;
    std::cout<<" p: "<<p<<std::endl;
    std::cout<<" &p: "<<&p<<std::endl;
    std::cout<<" p1: "<<p1<<std::endl;
    std::cout<<" &p1: "<<&p1<<std::endl;
    std::cout<<" *p1: "<<*p1<<std::endl;
    std::cout<<" **p1: "<<**p1<<std::endl;
    std::cout<<"before: ";
    std::cout<<"i: "<<i<<std::endl;
    std::cout<<"p: "<<p<<std::endl;
    std::cout<<"p1: "<<p1<<std::endl;
    update(p1);
    std::cout<<"after: ";
    std::cout<<"i: "<<i<<std::endl;
    std::cout<<"p: "<<p<<std::endl;
    std::cout<<"p1: "<<p1<<std::endl;




}