#include <iostream>
#define PRINT_JOe
int main(){
    #ifdef PRINT_JOe
    std::cout<<"joe\n";
    #endif
    #ifdef PRINT_BOB
    std::cout<<"harry\n";
    #endif

    return 0;
}