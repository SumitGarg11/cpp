#include <bits/stdc++.h>
using namespace std;
void middle(stack<int> s,int totalsize){
    if(s.size() == totalsize/2+1){
        cout<<"Middle element "<<s.top()<<endl;
        return;

    }
    int temp = s.top();
    s.pop();
    middle(s,totalsize);
    s.push(temp);
}
int main(){
    stack<int> s;
    int totalsize = s.size();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(600);
    s.push(3000);
    s.push(40000);
    middle(s,totalsize);



}