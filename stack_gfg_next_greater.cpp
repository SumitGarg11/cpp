#include <iostream>
void fun(int arr[],int n){
    for(int i = 0; i<n; i++){
        int j;
        for(j = i+1; j<n; j++){
            if(arr[j]>arr[i]){
                std::cout<<arr[i]<<" "<<arr[j]<<std::endl;
                break;
            }
        }
        if(j==n){
            for(int i = 0; i<n; i++){
            std::cout<<arr[i]<<" "<<-1<<std::endl;
            

        }
        break;
      }
    }
}
int main(){
    int size;
    std::cin>>size;

    int arr[size];
    for(int i = 0; i<size; i++){
        std::cin>>arr[i];
    }
    fun(arr,size);
}