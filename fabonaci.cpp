#include<iostream>
int main(){
    int n;
    std::cin>>n;

    int a = 0;
    int b = 1;
    std::cout<<a<<b;

    for(int i = 1; i<=n; i++){
        int next_no = a+b;
        std::cout<<next_no<<std::endl;
        a = b;
        b = next_no;

    }
    return 0;
}