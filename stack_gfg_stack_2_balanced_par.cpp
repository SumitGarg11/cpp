#include <bits/stdc++.h>
using namespace std;
void isbalanced(const std::string str){
    stack<int> temp;
    int j = 0;
    for(int i = 0; i<str.length(); i++){
        if(temp.empty()){
            temp.push(str[i]);
        }
        else if((temp.top() == '(' && str[i] == ')')||(temp.top() == '{' && str[i] == '}') || (temp.top() == '[' && str[i] == ']') ){
            j=j+2;
            
            temp.pop();
        }
        else{
            temp.push(str[i]);
        }
    }
    // if(temp.empty() == true){
    //     return true;
    // }
    // else {
    //     return false;
    // }
    std::cout<<j<<" ";
}
int main(){
    std::string str;
    std::cin>>str;
    isbalanced(str);
    // if(isbalanced(str)){
    //     std::cout<<"balanced";
    // }
    // else{
    //     std::cout<<"unbalanced";
    // }
}