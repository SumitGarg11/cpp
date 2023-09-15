#include <bits/stdc++.h>
using namespace std;
bool isbalanced(const std::string str){
    stack<int> temp;
    for(int i = 0; i<str.length(); i++){
        if(temp.empty()){
            temp.push(str[i]);
        }
        else if((temp.top() == '(' && str[i] == ')')||(temp.top() == '{' && str[i] == '}') || (temp.top() == '[' && str[i] == ']') ){
            temp.pop();
        }
        else{
            temp.push(str[i]);
        }
    }
    if(temp.empty() == true){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    std::string str;
    std::cin>>str;
    if(isbalanced(str)){
        std::cout<<"balanced";
    }
    else{
        std::cout<<"unbalanced";
    }
}