#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print3largenum(int arr[], int n){
    int first,second,third;
    if(n<3){
        std::cout<<"invalid input greater than 3 must";
    }
    first = second = third = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i] > first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i]!= first){
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i]!= second && arr[i]!= first){
            third = arr[i];
        }

       
    }
     std::cout<<"Largest num: "<<first<<" "<<second<<" "<< third<<std::endl;

}
int main(){
    std::cout<<"enter the size of arr: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        std::cin>>arr[i];
    }
    print3largenum(arr,n);





    return 0;
}