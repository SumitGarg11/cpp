#include <iostream>
using namespace std;
class score{
    private:
    int val;
    public:
    score(){
        val = 0;
    }
    void operator++(){
        val = val+1;
    }
    int show(){
        return(val);
    }
};
int main(){
    score s1,s2;
    cout<<"initial value of s1 object = "<<s1.show()<<endl;
    cout<<"initial value of s2 object = "<<s2.show()<<endl;
    ++s1;
    ++s1;
    ++s2;
    cout<<"final value od s1 object = "<<s1.show()<<endl;
    cout<<"final value od s2 object = "<<s2.show()<<endl;
    
}