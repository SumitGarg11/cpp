#include <iostream>
int miss_num(int arr[],int n){
    int total = n*(n+1)/2;
    int sum = 0;
    for(int i =0; i<n-1; i++){
        sum+=arr[i];
    }
    return total - sum;
}
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        std::cin>>arr[i];
    }
    for(int i = 0; i<n; i++){
        std::cout<<arr[i] <<" ";
    }
    std::cout<<std::endl;
    std::cout<<"missing num is = ";
    std::cout<<miss_num(arr,n);
    return 0;
}