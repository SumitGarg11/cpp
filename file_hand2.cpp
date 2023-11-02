#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream obj;
    char ch;
    obj.open("my file.txt");
    int pointer;
    pointer = obj.tellg();
    cout<<pointer;
    obj>>ch;
    pointer = obj.tellg();
    cout<<pointer;

   

}