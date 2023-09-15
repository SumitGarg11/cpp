#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int> > arr;
    vector<int> a{1,2,3};
    vector<int> b{4,2,5};
    vector<int> c{9,2,3};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    // for(int i = 0; i<arr.size();i++){
    //     for(int j = 0; j<arr.size(); j++){
    //         std::cout<<arr[i][j]<<" ";
    //     }
    //     std::cout<<std::endl;
    // }
    vector<vector<int>> v(5,vector<int> (5,11));
     for(int i = 0; i<v.size();i++){
        for(int j = 0; j<v.size(); j++){
            std::cout<<v[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}