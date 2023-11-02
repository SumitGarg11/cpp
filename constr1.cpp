#include <bits/stdc++.h>
using namespace std;
class rect{
    private:
    int l;
    int b;
    public:
    rect(int x = 2, int y = 3){
        l= x;
        b =y;
    }
    int area(){
        return (l*b);

    }
    
};
int main(){
    rect r;
    cout<<r.area();
    rect r1(4,5);
    cout<<"area2"<<r1.area();
}