#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    stack<char> s;
    for(int i = 0; i<str.length(); i++){

        s.push(str[i]);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();

    }
    cout<<endl;
}