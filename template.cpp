#include<bits/stdc++.h>
using namespace std;
template<class T>
T square(T a,T b){
    if(a>b){
        cout<<" minmum val  ";
        return b;
        
    }
    else{
        cout<<" minmum val ";
        return a;
    }

}
int main(){
    int num1;

    int num2;
    cin>>num1>>num2;
    cout<<num1 <<" and "<<num2 <<" = "<<square<int>(num1,num2);
    cout<<endl;
    float num;

    float n;
    cin>>num>>n;
   cout<<num <<" and "<<n<<" = "<<square<float>(num,n);
   cout<<endl;
   char a,b;
   cin>>a>>b;
   cout<<a <<" and "<< b <<" = "<<square<char>(a,b);


    
}