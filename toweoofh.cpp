#include <iostream>
using namespace std;
int TOH(int n){
    if(n==0) return 0;
    return 2 * TOH(n-1)+1;
}
int main(){
    int n;
    cin>>n;
    int moves = TOH(n);
    cout<<"display min ";
    cout<<moves;
    
}