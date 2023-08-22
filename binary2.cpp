// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {12,34,56,78,98,0,8};
    if(binary_search(arr.begin(),arr.end(),98)){
        std::cout<<"15 exict in vector";
    }else{
        std::cout<<"not exict";
    }
    return 0;
}