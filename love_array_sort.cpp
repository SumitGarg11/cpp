#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,value = 0;
    std::cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; i++){
        int value;
        std::cin>>value;
        arr.push_back(value);
    }
    std::cout<<" unsorted array: ";
    for(int i = 0; i<n; i++){
        std::cout<<arr[i]<< " ";
    }
    int s = 0;
    int e = n - 1;
    int i = 0;
    while(i != e){
        if(arr[i] == 0){
            swap(arr[s] , arr[i]);
            s++;
            i++;
        }
        else{
            swap(arr[i],arr[e]);
            e--;
        }
    }
    std::cout<<" sorted array: ";
    for(int i = 0; i<n; i++){
        std::cout<<arr[i]<< " ";
    }

}        