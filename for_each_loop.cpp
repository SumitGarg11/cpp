#include <iostream>
int main(){
    int arr[] = {23,43,54};
    for(int i : arr){
        std::cout<<i<<" ";
    }

    int max = -1;
    for(int i : arr){
        if(i>max){
            max = i;
        
        }
    }
   std::cout<<max;
}