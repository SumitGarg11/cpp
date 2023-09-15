#include <iostream>
using namespace std;
class st{
    
    public:
    int roll;
    st(int a){
        roll = a;
    }
    st(st &obj){
        roll = obj.roll;
    }

};
int main(){
    st rohit(15);
    st nerraj(rohit);
    cout<<"rohit roll number: "<<rohit.roll<<endl;
    cout<<"rohit roll number: "<<nerraj.roll<<endl;

}
