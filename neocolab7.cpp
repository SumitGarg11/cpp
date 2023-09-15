#include <iostream>
using namespace std;
class Event{
    private:
    int p_id;
    string p_name;
    public:
    static int total_p;
    void setdata(int i_d,const string &name){
        p_id = i_d;
        p_name = name;
        total_p++;
    }
    static int print(){
        return total_p;
    } 
};
int Event::total_p = 0;


int main(){
    int n;
    cin>>n;
    int i_d;
    string name;
    for(int i = 0; i<n; i++){
        cin>>i_d;
        cin>> name;
        Event obj;
        obj.setdata(i_d,name);
    }
    cout<<Event::print();
}