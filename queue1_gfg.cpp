#include <bits/stdc++.h>
using namespace std;
void printq(queue<int> q){
    queue<int> aq = q  ;    // aq another queue 
    while(!aq.empty()){
       
        cout<<" "<<aq.front();
        aq.pop();
        cout<<endl;
    }
    cout<<endl;

}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<" queue is :"<<endl;
    printq(q);
    cout<<"front of queue is : "<<q.front();
    cout<<endl;
    cout<<"last of queue is : "<<q.back();
    cout<<endl;
    cout<<"delete the first element: "<<endl;
    q.pop();
    cout<<" queue is :"<<endl;
    printq(q);



}