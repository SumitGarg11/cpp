#include <iostream>

int binary_search_1(int arr[],int size,int target){
    int s = 0;
    int e = size - 1;
    int mid = (s+e)/2;
    while(s<=e){
        if (arr[mid] == target){
            return mid;
        }
        if(target > arr[mid]){
            s = mid + 1;
        }
        
        else{
            e = mid - 1;
    
        mid = (s+e)/2;
    }
    
}
return -1;
}

int main() {
    int even[6] = {1,2,3,45,67,56};
    
    std::cout<<binary_search_1(even,6,12)<<std::endl;
    
    return 0;


}