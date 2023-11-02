#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {7,2,4,5,1,3};
    int ans = 0;
    int n = sizeof(arr)/sizeof(int);
    for(int i =1; i<n-1; i++){
         cout<<accumulate(arr,arr+i-1,0);
        if(accumulate(arr,arr+i-1,0) == accumulate(arr+i+1,arr+n-1,0)){
           cout<<arr[i];
        };
    }
   
    cout<<ans;
}