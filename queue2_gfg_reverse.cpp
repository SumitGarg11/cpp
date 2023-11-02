#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printq(queue<int> q){
    queue<int> aq = q;
    while(!aq.empty()){
        cout<<aq.front()<<" ";
        aq.pop();
    }
    cout<<endl;

}
queue<int> reverseq(queue<int> q){

    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    return q;


}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"without reverse q: "<<endl;
    printq(q);
    cout<<endl;
    cout<<"reverse q: "<<endl;
    
    printq(reverseq(q));


}