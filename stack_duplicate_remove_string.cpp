#include <bits/stdc++.h>
using namespace std;
string removedup(string &str){
    stack<char> s;
    int n = str.size();
    int i = 0;
    while(i<n){
        if(s.empty() || s.top() != str[i]){
            s.push(str[i]);
        }
        else{
            s.pop();
            
        }
        i++;

    }
    string ans = " ";
    while(!s.empty()){
        char element = s.top();
        s.pop();
        ans+=element;
    }
    reverse(ans.begin(),ans.end());
    return ans;

}
int main(){
    string s;
    cin>>s;
    string a = removedup(s);
    cout<<a;
}