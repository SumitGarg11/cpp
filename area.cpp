// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    queue<int>s;
  for(int i = 0; i<n; i++){
      int v;
      cin>>v;
      s.push(v);
  }
  while(s.size() != 0){
      cout<<s.front()<<" ";
      s.pop();
  }
    

    return 0;
}