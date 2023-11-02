#include  <iostream>
using namespace std;
void sort(int arr[], int n){
    for(int i = 0; i<n; i++){
        int min_index = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;

            }
        }
        swap(arr[i],arr[min_index]);
        
    }   
}
int main(){
    int arr[] = {9,8,4,0,1,10,6};
    int n = sizeof(arr)/sizeof(int);
    sort(arr,n);
    for(int i = 0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
}