#include <bits/stdc++.h>
using namespace std;
void lengthlongestpar(string &str){
    stack<char> s;
    int j = 0;
    for(int i = 0; i<str.length(); i++){
        if(s.empty()){
            s.push(str[i]);
            
        }
        else if((s.top()=='(' && str[i] == ')') || (s.top() == '[' && str[i] == ']') || (s.top() == '{' && str[i] == '}')){
            j = j+2;
            s.pop();
        }
        else{
            s.push(str[i]);
        }
    }
    cout<<j;

}
int main(){
    string s;
    cin>>s;
    lengthlongestpar(s);
    
}
