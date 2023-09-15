#include <bits/stdc++.h>
using namespace std;
int fun( vector<int> &arr){
    for(int i = 0; i<arr.size(); i++){
        int j = 1+i;
        for( ; j<arr.size(); j++){
            if(arr[i] == arr[j]){
                return arr[i];
            }
            
        }
        
    }
    return -1;
}
int main(){
    vector<int>arr{1, 3 ,4 ,2 ,2};
    int size = 4;
    int ans = fun(arr);
    std::cout<<ans<<std::endl;

}