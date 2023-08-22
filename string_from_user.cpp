#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
struct str{
    string s1;
};
int main(){
    int n;
    int count = 0;
    std::cin>>n;
    std::cout<<"ch: ";
    char ch;
    std::cin>>ch;

    str arr[n];
    for(int i = 0; i<n; i++){
        std::cin>>arr[i].s1;
    }
    for(int i = 0; i<n; i++){
        if(arr[i].s1[0]== ch){
            count++;
        }
        
    }
    std::cout<<"num: "<<count;
    

    

    return 0;
}