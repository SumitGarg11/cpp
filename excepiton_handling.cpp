#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the val of a and b: ";
    cin>>a >> b;
    int x  =a - b;
    try{
        if(x!=0){
            cout<<"result(a/x)="<<a/x;
        }
        else {
            throw(x);
        }
    }
    catch(int i){
        cout<<"exception caught"<<x;
    }
    cout<<"end";
    return 0;
}