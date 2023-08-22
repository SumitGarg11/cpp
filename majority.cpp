#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    int hash[n];
    for(int i = 0; i<n; i++){
        std::cin>>arr[i];

    }
    for(int i = 0; i<n; i++){
        hash[arr[i]]+=1;
    }
    int num;
    std::cin>>num;
    std::cout<<hash[num];
}