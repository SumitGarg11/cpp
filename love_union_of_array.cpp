#include <iostream>
void fun(int arr1[],int arr2[],int m,int n){
    int c[m+n];
    for(int i = 0; i<m; i++){
        c[i] = arr1[i];
    }
    for(int i = 0; i<n; i++){
        c[m+i] = arr2[i];
    }
    for(int i= 0; i<m+n; i++){
        if(i==0 || c[i] != c[i-1]){
            std::cout<<c[i]<<" ";
        }
    }

}
int main(){
    int arr1[] = {10,20,20,40,40,60};
    int arr2[] = {2,20,20,20};
    int m = 6;
    int n = 4;
    std::cout<<" union: ";
    fun(arr1,arr2,m,n);

    
}