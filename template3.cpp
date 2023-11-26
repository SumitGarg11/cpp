#include <iostream>
using namespace std;
template<class T>
class aplha{
    protected:
    T a;
    public:
    void check(){
        cout<<"hello";
    }
};
template<class T, class T1>
class beta:public alpha<T>{
    private:
    T1 b;
    public:
    void get(){
        cin>>aplha<T>::a>>b;
    }
    void display(){
        cout<<"a: "<<aplha<T>::a<<endl;
        cout<<"b: "<<b<<endl;
        aplha<T>::check();
    }
};
int main(){
    beta<int,float> b1;
}




