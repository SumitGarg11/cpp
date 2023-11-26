#include <bits/stdc++.h>
using namespace std;
bool isvalid(int arr[], int n){
    if(n==0) return true;
    int min_val = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]<min_val){
            return false;
        }
        min_val = arr[i];
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    if(isvalid(arr,n)){
        cout<<"yes";
    }
    else cout<<"NO";
}