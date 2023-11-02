#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insertAtBotom(stack<int> &s, int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int number = s.top();
    s.pop();
    insertAtBotom(s,target);
    s.push(number);
}
void reverse1(stack<int> &s){
    if(s.empty()) return ;
    int target =s.top();
    s.pop();
    reverse1(s);
    insertAtBotom(s,target);
    
}
int main(){
    stack<int> s;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int v;
        cin>>v;
        s.push(v);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}