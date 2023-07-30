#include <bits/stdc++.h>
using namespace std;
int main(){

    string s = "shyam";
    int len = s.size();
    s[len - 1] = 'a';
    std::cout<<s[len - 1];
    return 0;
}