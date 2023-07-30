#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        char ch = 'A'+row+col-2;
        while(col<=n){
            std::cout<<ch;
            col++;
        }
        std::cout<<std::endl;
        row++;
        return 0;
    }
}