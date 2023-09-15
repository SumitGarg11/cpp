#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    stack<int>s;
    for(int i = 0; i<n; i++){
        int data;
        cin>>data;
        s.push(data);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}