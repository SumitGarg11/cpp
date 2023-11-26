#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(10);
    cout<<"size of vector: "<<v.size()<<endl;
    for(int i = 0; i<=9; i++){
        v[i] = i;
    }
    for(int i  =10; i<=19; i++){
        v.push_back(i);
    }
    cout<<"size "<<v.size()<<endl;
    for(int i = 0; i<=19; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
    cout<<"size "<<v.size()<<endl;

}

