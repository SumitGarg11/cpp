#include <iostream>
using namespace std;
void fun(int arr1[],int arr2[],int m,int n){
    int j = 0;
    int i = 0;
    while(i<m && j<n){
        if(i>0 && arr1[i] == arr1[i-1]){
            i++;
            continue;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            std::cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}
int main(){
    int arr1[] = {10,20,20,40,40,60};
    int arr2[] = {2,20,20,20};
    int m = 6;
    int n = 4;
    std::cout<<" commaon: ";
    fun(arr1,arr2,m,n);

    
}