#include <iostream>
int firstRepatNum(int arr[],int n){
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                return i;
            }
        }
    }
    int n;
    std::cin>>n;
    int arr[n]= {10,5,3,4,3,5,6};
    int index = firstRepatNum(arr,n);
    if(index == -1){
        std::cout<<"no repating num,";
    }
    else{
        std::cout<<"num is : "<<arr[index];
    }
    return 0;
}