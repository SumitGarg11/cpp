#include <iostream>
using namespace std;
class X{
    private:
    int a;
    public:
    void getX(){
        cout<<"enter a: ";
        cin>>a;

    }
    void showX(){
        cout<<a<<" ";

    }
};
class Y : private X{
    private:
    int b;
    public:
    
    void getY(){
        getX();
        cout<<"enter b: ";
        cin>>b;

    }
    void showY(){
        showX();
        cout<<b<<" ";

    }
};
class Z: private Y{
    private:
    int C;
    public:
    void getZ(){
        getY();
        cout<<"enter C: ";
        cin>>C;

    }
    void showZ(){
        showY();
        cout<<C<<" ";

    }
};
int main(){
    Z obj;
    obj.getZ();
    obj.showZ();
}


