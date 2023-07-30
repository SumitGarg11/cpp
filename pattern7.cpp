#include <iostream>
int main(){

    int n;
    std::cin>>n;
    int row  = 1;
    while(row<=n){
        int col = 1;
        int value = row;
        while(col<=row){
            std::cout<<value;
            value++;
            col++;
        }
        std::cout<<std::endl;
        row++;
    }
    return 0;
}