#include <iostream>
using namespace std;
int main(){
int arr[] = {3,1,4,8,8,7};
int target = 8;
for(int i = 0; i<6; i++){
    if(target == arr[i]) {
        cout<<i<<" ";
        continue;
    }
 }
}