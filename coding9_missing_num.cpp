#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int arr[] = {1,3,4,5};
    int n = 5;
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans^= arr[i]^i;
    }
    
    cout<<ans;

    int sum = 0;
    for(int i = 0; i<n-1; i++){
       sum=sum+arr[i];

 }
    cout<<sum/5;


}