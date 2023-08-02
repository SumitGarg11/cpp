#include <iostream>
int firsto(int arr[],int n,int target){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
            e = mid - 1;
        }
        else if(target>arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e -s)/2;
    }
    return ans;

}







int main(){
    int arr[6] = {1,34,56,78,90,95};
    std::cout<<firsto(arr,6,90)<<std::endl;

    return 0;
}