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
void change(queue<int> q){
    stack<int> s;
    int n = q.size();
    
    for(int i = 0; i<n/2; i++){
        s.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
   
    printq(q);
    cout<<endl;
   
    
    


}