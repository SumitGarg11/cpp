#include <bits/stdc++.h>
using namespace std;
class abc{
    private:
    int x,y,z;
    public:
    abc(int a, int b, int c){
        x = a;
        y = b;
        z = c;
    }



void display(){
    cout<<x;
    cout<<y;
    cout<<z<<"\n";

}
void operator-(){
    x = -x;
    y=-y;
    z=-z;
}
};
int main(){
    abc obj(10,-20,30);
    cout<<"s: ";

    obj.display();
}