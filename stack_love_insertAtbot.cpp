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
    int target = 20;
    
    insertAtBotom(s,target);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }




}