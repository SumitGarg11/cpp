#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rotateAarray(int arr[],int n, int d){
    int c = n - d;  
    reverse(arr,arr+c);
    reverse(arr+c, arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n,d;
    std::cin>>n;
    int arr[n];
    for(int i   = 0; i<n; i++){
        std::cin>>arr[i];
    }
    std::cout<<"d: ";
    std::cin>>d;
    std::cout<<"original array: ";
    for(int i = 0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    
    rotateAarray(arr,n,d);
    
    std::cout<<"output: ";
    for(int i = 0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }

}