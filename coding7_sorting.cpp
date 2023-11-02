//1 selection sort 

#include <iostream>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i = 0; i<n; i++){
        int min_index = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[min_index]){
                min_index =j;
                
            }
            
        }
        swap(arr[min_index],arr[i]);
    }
}

void insertion_sort(int arr[],int n){
    for(int i = 0; i<n; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }

    }
}
void buble_sort(int arr[],int n){
    for(int i = 1; i<n; i++){
        // array is alraedy sort 
        int did_swap = 0;
        for(int j = 0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                did_swap = 1;
            }
        }
        if(did_swap == 0){
            break;
        }
    }
}
int main(){
    int arr[] = {9,6,3,2,1};
    int n = 5;
    // selection_sort(arr,n);
    // insertion_sort(arr,n);
    buble_sort(arr,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}