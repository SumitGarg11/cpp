#include <iostream>

int search(int arr[], int n, int target){
    for(int i = 0; i<=n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n = 10;
    int arr[n] = {1,2,3,4,56,6};
    int target = 56;
    std::cout<<search(arr,n,56)<<std::endl;

}