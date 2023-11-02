#include <iostream>
using namespace std;
// class X{
//     public:
//     int a = 10;
// };
// class Y:public X{
//     public:
//     int b = 20;
// };
// class Z:public Y{
//     public:
//     int c = 30;
// };
// int main(){
    
//     Z obj;
//     cout<<obj.a<<" ";
//     cout<<obj.b<<" ";

// }
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

