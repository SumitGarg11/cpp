#include <iostream>
using namespace std;
template<class T>
class abc{
    T *a;
    int size;
    public:
    abc(){
        cout<<"enter size of array: ";
        cin>>size;
        a=new T[size];
        cout<<"enter the elements: ";
        for(int i = 0; i<size; i++){
            cin>>a[i];
        }
    }
    
    T sum1(){
        T sum = 0;
        for(int i  =0; i<size; i++)
            sum = sum + a[i];
            return sum;
        
    }
    
};
int main(){
    abc<int>obj1;
    cout<<"sum of integer array elements "<<obj1.sum1();
    cout<<endl;
    abc<float>obj2;
    cout<<"sum of float array elements "<<obj2.sum1();
}