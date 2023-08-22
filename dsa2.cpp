#include <iostream>
void insert_beg(int arr[] ,int n){
    int j = n;
    for(int i = j; i>=0; i--){
        arr[i+1] = arr[i];

    }
    std::cout<<std::endl;
    std::cout<<"enter element you want in beg: ";
    std::cin>>arr[0];
    for(int i = 0; i<n+1; i++){
        std::cout<<arr[i]<<" ";
    }
}
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
    

}