#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    int n;
    std::cin>>n;
    for(int i = 0; i<n; i++){
        int num;
        std::cin>>num;
        s.insert(num);
    }
    auto it = s.find(0);
    if(it != s.end()){
        s.erase(it);
    }
    for(auto value : s){
        std::cout<<value<<" ";
    }

   

}