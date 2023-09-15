#include <iostream>
int main(){
    int arr[] = {2,1,1,2,0,0};
    int size = 6;
    int zero = 0;
    int one = 0;
    int two = 0;
    for(int i = 0;i<size; i++){
        if(arr[i] == 0) zero++;
        else if(arr[i] == 1) one++;
        else two++;

    }
    int i = 0;
    while(zero--){
        arr[i] = 0;
        i++;
    }
     while(one--){
        arr[i] = 1;
        i++;
    }
     while(two--){
        arr[i] = 2;
        i++;

    }
    std::cout<<"array sorted: ";
    for(int i = 0; i<size; i++){
        std::cout<<arr[i]<<" ";
    }
}