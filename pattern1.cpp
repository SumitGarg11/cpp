#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            std::cout << n-j+1;
            j++;
        }
        std::cout << std::endl;
        i++;
    }
    return 0;
    
}