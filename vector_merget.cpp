#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<int> v(5);

    vector<int> s(v.size());
    
    for(int i = 0; i<5; i++){
        int value;
        cin>>value;
        v.push_back(value);
    }
    for(int i = 0; i<3; i++){
        v.push_back(v[i]);
    }
    for(int i = 0; i<v.size(); i++){
        
        cout<<v[i]<<" ";
    }

}