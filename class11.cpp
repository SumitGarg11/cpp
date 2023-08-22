#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct info{
    string name;

};
int main(){
    info u[5];
    for(int i = 0;i<5; i++){
        std::cout<<" enter the name of emp: "<<i+1;
        std::cin>>u[i].name;
    }
    std::cout<<"****name of emp: ****"<<std::endl;
    for(int i =0;i<5; i++){
        std::cout<<u[i].name<<std::endl;
    }
    return 0;
}