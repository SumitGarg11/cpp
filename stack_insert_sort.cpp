#include <bits/stdc++.h>
using namespace std;
void sorted_stack(stack<int> &s,int target){
    if(s.empty()){
        s.push(target);

        return;
    }
    if(s.top()>= target){
        s.push(target);
        return;
    }
    int topelement = s.top();
    s.pop();
    sorted_stack(s,target);
    s.push(topelement);

}
void sorted(stack<int> &s){
    if(s.empty()){
        return;
    }
    int topelement = s.top();
    s.pop();
    sorted(s);
    sorted_stack(s,topelement);
}
int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    
    

    stack<int> s;
    for(int i = 0; i<n; i++){
        int data;
        cin>>data;
        s.push(data);
    }
    sorted(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }


}