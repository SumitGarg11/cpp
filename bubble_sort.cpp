#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i = 1; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}
int main(){
    int n;
    std::cin>>n;
    int arr[n] = {2,9,4,58,1};
    bubblesort(arr,5);
    for(int i = 0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
}