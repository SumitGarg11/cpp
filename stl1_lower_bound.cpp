#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {20,30,50,60,90};
    auto it = lower_bound(arr,arr+5,40) - arr;
    auto itr = upper_bound(arr,arr+5,50);



    cout<<it<<endl;
    
    cout<<*itr;
}