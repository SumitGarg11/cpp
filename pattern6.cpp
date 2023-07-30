#include <iostream>
int main(){
    int n;
    int count = 1;
    std::cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            std::cout<<count;
            count++;
            col++;
        }
        std::cout<<std::endl;
        row++;
    }
    return 0;
}