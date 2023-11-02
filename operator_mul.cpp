#include <bits/stdc++.h>
using namespace std;
class complex1{
    private:
    int a,b;
    public:
    void setdata(int x,int y){
        a = x;
        b = y;
    }
    void showdata(){
        cout<<"a: "<<a <<" "<<"b: "<<b;
    }
    complex1 operator* (complex1 c2){
        complex1 temp;
        temp.a = a*c2.a;
        temp.b = b*c2.b;
        return temp;
    }
};
int main(){
    complex1 c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3 = c1 * c2 ;
    c3.showdata();

}