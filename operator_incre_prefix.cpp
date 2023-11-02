#include <bits/stdc++.h>
using namespace std;
class Increment1{
    private:
    int a;
    public:
    void setdata(int x){
        a = x;
    }
    void showdata(){
        cout<<"a: "<<a;
    }
    Increment1 operator++(){
        Increment1 temp;
        temp.a = ++a;
        return temp;
    }

    //postfix
    Increment1 operator++(int){
        Increment1 temp;
        temp.a = a++;
        return temp; 
    }                                               

};
int main(){
    Increment1 c1,c2;
    c1.setdata(3);
    c1.showdata();
    cout<<endl;
    c2 = c1++;
    c2.showdata();
    cout<<endl;
    c1.showdata();
}