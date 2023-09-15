#include <iostream>
void fun(int arr[],int n){
    for(int i = 0; i<n; i++){
        int j;
        for(j = i+1; j<n; j++){
            if(arr[j]>arr[i]){
                std::cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==n){
            std::cout<<-1<<" ";
        }
    }
}
int main(){
    int arr[] = {5,15,10,8,6,12,9,18};
    int size= 7;
    fun(arr,size);
}