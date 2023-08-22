#include <bits/stdc++.h>



int algorithm(vector<int> v){
    int count = 0;
    int ele;
    for(int i  =0; i<v.size(); i++){
        if(count == 0){
            count = 1;
            ele = v[i];
        }
        else if(v[i] == ele){
            count++;
        }
        else{
            count--;
        }
    }
    int count1 = 0;
    for(int i = 0; i<v.size(); i++){
        if(v[i] == ele){
            count1++
        }
        if(count1>(v.size())/2){
            return ele;
        }
    }
    return -1;
}
int main(){
    vector<int> v;
    int n;
    std::cin>>n;
    for(int i = 0; i<n; i++){
        int value;
        std::cin>>value;
        v.push_back(value);<
    }
    int a = algorithm(vector<int> v)
    std::cout<<a;
}