#include<iostream>
using namespace std;
template<class T>
void display(T x){
    cout<<"template dispaly: "<<x<<"\n";
}
template<class T1, class T2, class T3>
void dispaly(T1 x ,T2 y, T3 z){
    cout<<"template dispaly: "<<x<<" "<<y<<" "<<z<<" ";
}
void display(int x){
    cout<<"explicit dispaly: "<<x<<"\n";
}
int main(){
    int n;
    cin>>n;
    float m;
    cin>>m;
    char c;
    cin>>c;
    display(n);
    display(m);
    display(c);
    return 0;
}