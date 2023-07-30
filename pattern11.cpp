#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int row = 1;
    char ch = 'A';
    while(row<=n){
        int col = 1;
        while(col<=n){
            std::cout<<ch;
            ch++;
            col++;

        }
        std::cout<<std::endl;
        row++;
    }
    return 0;
}