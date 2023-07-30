#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        char ch = 'A';
        while(col<=row){
            std::cout<<ch;
            ch++;
            col++;
        }
        std::cout<<std::endl;
        row++;
    }
    return 0;
}