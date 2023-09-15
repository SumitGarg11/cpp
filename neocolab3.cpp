#include <iostream>
using namespace std;
class Doctor{
    public:
    string s,n;
    int p;
   void getdata(){
        cin>>s;
        cin>>n;
        cin>>p;
    }
    void print(){

        cout<<s<<endl;
        cout<<n<<endl;
        cout<<p<<endl;
    }


};
int main(){
  Doctor obj;
  obj.getdata();
  obj.print();  
}