#include <iostream>

using namespace std;

int main()
{
    // int a(9);
    // int username;
    // std::cout <<  a;
    // std:: cout << "hello" << endl << "world";
    // std::cout << "enter your username : ";
    // std :: cin >> username;
    // std::cout<< "user name is: " <<  username;

    // for(int i = 0; i<=5; i++){
    //     std::cout<<i<<" ";
    //     i++;
    // }
    // for(int i = 0; i<=15; i+=2){
    //     std::cout<< i <<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;

    // }





    for(int i = 0; i<5; i++){
        for(int j = i; j<=5; j++){ 
            std::cout<<i <<" " << j <<std::endl;
        }
    }
    return 0;
}