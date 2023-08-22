#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int f1(int f , int l,int n,int arr[]){
    if(f>=l){
        return 0;
    }
    
    swap(arr[f] ,arr[l]);
    
    return f1(f+1,l-1,n,arr);
}
int main(){
    int n = 6;
    int arr[n] = {1,9,10,29,89,99};
    std::cout<<"reverse the array: "<<f1(0,n-1,n,arr);
}