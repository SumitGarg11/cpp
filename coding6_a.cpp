#include <iostream>
using namespace std;
void fun(int n){
    if(n == 0){
        return;
    }
    if(n%2==0){
        cout<<n<<" ";

    }
    fun(n-1);
}
int main(){
    int n = 10;
    fun(n);
}