#include <iostream>
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i<n){
        arr3[k++] = arr1[i++];
    }
    while(j<m){
        arr3[k++] = arr2[j++];
    }
    

}
void print1(int ans[],int n){
        for(int i=0; i<n; i++){
            std::cout<<ans[i]<<" ";
        }
    }
int main(){
    int arr1[] = {1,3,6,7,9,15};
    int arr2[] = {4,5,8};
    int arr3[9]= {0};
    merge( arr1, 6, arr2,3,arr3);
    print1(arr3,9);
    return 0;
}