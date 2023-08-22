#include <iostream>
int main(){
    enum days{sun,mon,tue,w,t,f,sat};
    days day1,day2;
    day1 = sun;
    day2 = sat;
    std::cout<<"day1: "<<day1<<" "<< "day2: "<<day2<<std::endl;
    if(day1>day2){
        std::cout<<"day1 comes after day2";
    }
    else{
        std::cout<<"day1 comes before day2";
    
    }
}