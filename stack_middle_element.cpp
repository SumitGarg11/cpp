#include <bits/stdc++.h>
using namespace std;
void middle(stack<int> s,int totalsize){
    if(s.size() == 0){
        cout<<"no element";
        return ;
    }
    if(s.size() == (totalsize/2)+1){
        cout<<"mid: "<<s.top();return ;
    }
    int temp = s.top();
    s.pop();
    middle(s,totalsize);
    s.push(temp);

}
int main(){
    stack<int> s;
    
    for(int i = 0; i<8; i++){
        int val;
        cin>>val;
        s.push(val);
    }
    int totalsize = s.size();
   
    middle(s,totalsize);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }



}