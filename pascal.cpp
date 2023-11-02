#include <bits/stdc++.h>
using namespace std;
vector<int>generaterow(int row){
    int  ans = 1;
    vector<int>ans_row;
    ans_row.push_back(1);
    for(int col = 1; col<row; col++){
        ans = ans* (row-col);
        ans = ans/(col);
        ans_row.push_back(ans);
    }
    return ans_row;

}

vector<vector<int>>fun(int n){
    vector<vector<int>> ans;
    for(int i = 1; i<n; i++){
        ans.push_back(generaterow(i));
    }
    return ans;
    

}
int main(){
    int n;
    cin>>n;
    fun(n);
   

}
