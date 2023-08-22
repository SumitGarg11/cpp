#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        std::cin>>arr[i];
    }
    for(int i = 0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
// **************************************************
//at the end

    // arr[n] = arr[n+1];
    // std::cout<<"enter the element for insert in end: ";
    // std::cin>>arr[n];
// **************************************************
    // int j = n; // at the begning
    // for(int i = j; i>=0; i--){
    //     arr[i+1] = arr[i];
    // }

    // std::cout<<"enter element insert at begniing:"<<std::endl;
    // std::cin>>arr[0];

    // **************************************
    // at the anywhere
    int pos,j;
    std::cout<<"enter the position where u want the element: ";
    std::cin>>pos;
    j = n;
    for(int i = j; i>=pos-1; i--){
        arr[i+1] = arr[i];
    }
    std::cout<<"enter the element : ";
    
    std::cin>>arr[pos-1];
    
    for(int i = 0; i<n+1; i++){
        std::cout<<arr[i]<<" ";
    }


}