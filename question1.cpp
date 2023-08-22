#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n,value = 0;
    std::cout<<"enter the size of vector: ";
    std::cin>>n;
    for(int i= 0; i<n;i++){
        std::cin >> value;
        v.push_back(value);
    }
    
    sort(v.begin(),v.end());
    v.erase(v.begin(),v.begin()+2);

    for(int i= 0; i<n; i++){
        std::cout<<v[i]<<" ";
        
     }
}    