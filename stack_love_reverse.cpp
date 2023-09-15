#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int number = s.top();
    s.pop();
    insertAtBottom(s,target);
    s.push(number);
}
void reverse_st(stack<int> &s){
    if(s.empty()){
        return;
    }
    int target = s.top();
    s.pop();
    reverse_st(s);
    insertAtBottom(s,target);
    

}
int main(){
    int n;
    cin>>n;

    stack<int> s;
    for(int i = 0; i<n; i++){
        int data;
        cin>>data;
        s.push(data);
    }
    if(s.empty()){
        cout<<"stack is empty"<<endl;
        return 0;
    }
    reverse_st(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    

}