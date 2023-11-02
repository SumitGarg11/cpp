#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
string fun(char arr[]){
    return string(arr);
}
int main(){
    string s;
    cin>>s;

  char arr[s.size()];
  strcpy(arr,s.c_str());
  for(int i = 0; i<s.size(); i++){
    cout<<arr[i]<<" ";
  }
  cout<<fun(arr);

  


}
