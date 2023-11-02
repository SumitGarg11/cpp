#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int *arr;
    int size;
    cout<<"\n enter the size of int array";
    cin>>size;
    cout<<"creating an array of size "<<size;
    arr = new int[size];
    if(arr == NULL){
        cout<<"\n problem in memory allocation";
        exit(1);
        
    }
}