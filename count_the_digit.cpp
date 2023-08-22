#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int countnum(int n){
//     int count = 0;
//     int last_num;
//     while(n>0){
//         last_num = n%10;
       
//         count++;
//         n = n/10;
//     }
//     return count;
// }
int count1(int n){

    int count = static_cast<int>(log10(n)+1);
    return count;
}

int revnum(int n){
    int last_num;
    int r = 0;
    while(n>0){
        last_num = n%10;
        r = (r*10)+last_num;
        n = n/10;
    }
    return r;
}
int main(){
    int n;
    std::cout<<"enter the number: ";
    std::cin>>n;
    std::cout<<"countnum: "<<count1(n)<<std::endl;
    std::cout<<"reverse num: "<<revnum(n)<<std::endl;

    return 0;
}