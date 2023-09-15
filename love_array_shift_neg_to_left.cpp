#include <bits/stdc++.h>
int main(){
    int arr[] = {-1,-2,-3,-4,-5,6};
    int size = 6;
    int l = 0;
    int m = 0;
    while(m<size){
        
        if(arr[m]<0){
            std::swap(arr[l],arr[m]);
            l++;
            m++;
        }
         else if(arr[m]>0){
            m++;
        }
    }
    for(int i = 0; i<size; i++){
        std::cout<<arr[i]<< " ";
    }
}