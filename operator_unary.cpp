#include <bits/stdc++.h>
using namespace  std;
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
    complex1 operator-(){
        complex1 temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }

};
int main(){
    complex1 c1,c2;
    c1.setdata(3,4);
    c2 = -c1;
    c2.showdata();

}