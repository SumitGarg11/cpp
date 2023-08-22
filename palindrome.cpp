#include <iostream>
using namespace std;
void check_p(int n){
    int last_num;
    int r= 0;
    int c;
    while(n>0){
        last_num = n%10;
        r = (r*10)+last_num;
        n = n/10;
    }
    int rev = r;
    if(rev == c){
        std::cout<<"its palindrome";
    }
    else{
        std::cout<<"its not palindrome";
    }
}
int main(){
    int n;
    std::cout<<"enter the num: ";
    std::cin>>n;
    

    return 0;
}