#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            char ch = 'A'+col -1;
            std::cout<<ch;
            col++;
        }
        std::cout<<std::endl;
        row++;
    }
    return 0;
}