#include <iostream>

int main(){
    int n;
    std::cin>>n;
    int arr[n] = {1,5,7,9,76,5};
    int pos = 3;
    int element;
    std::cout<<"element: ";
    std::cin>>element;

    std::cout<<" array is: "<<std::endl;
    for(int i = 0;i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

    for(int i = n - 1; i>=pos-1; i--){
        arr[i+1] = arr[i];
        arr[pos - 1] = element;
        n++;
    }
    for(int i = 0;i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}