#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    std::cout<<"n: ";
    std::cin>>n;
    std::cout<<"m: ";
    std::cin>>m;
    std::cout<<"k: ";
    std::cin>>k;
    std::cout<<"*********"<<std::endl;
    int arr1[n];
    int arr2[m];
    int arr3[k];
    std::cout<<"take input for arr1: "<<std::endl;
    for(int i = 0; i<n; i++){
        std::cin>>arr1[i];
    }
     std::cout<<"take input for arr2: "<<std::endl;
    for(int i = 0; i<m; i++){
        std::cin>>arr2[i];
    }
     std::cout<<"take input for arr3: "<<std::endl;
    for(int i = 0; i<k; i++){
        std::cin>>arr3[i];
    }
    for(int i = 0; i<m; i++){
        arr1[n+i] = arr2[i];
    }
    for(int i = 0; i<k; i++){
        arr1[n+m+i] = arr3[i];
    }
    sort(arr1,arr1+n+m+k);
     std::cout<<"three array is merge: ";
    for(int i =0; i<n+m+k; i++){
        std::cout<<arr1[i]<<" ";
    }
  
    return 0;
}