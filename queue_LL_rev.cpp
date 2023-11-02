#include <bits/stdc++.h>
using namespace std;
void rev(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        int el = q.front();
        q.pop();
        s.push(el);
    }
    while(!s.empty()){
        int el = s.top();
        s.pop();
        q.push(el);
    }
}
int main(){

queue<int> q;
int n;
cin>>n;
for(int i = 0; i<n; i++){
    int val;
    cin>>val;
    q.push(val);
}
rev(q);
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}

}