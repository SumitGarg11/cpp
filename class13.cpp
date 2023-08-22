#include <iostream>
int main(){
    enum level  {easy = 1,normal,hard};
    std::cout<<"difficulty level: ";
    std::cout<<"1 - easy\n";
    std::cout<<"2 - normal\n";
    std::cout<<"3 - hard\n";
    
    int choice;
    std::cout<<"choice: ";
    std::cin>>choice;
    switch(choice){
        case easy:
        std::cout<<"u choice easy";
        break;

        case normal:
        std::cout<<"u choice normal";
        break;

        case hard:
        std::cout<<"u choice hard";
        break;
    }
    return 0;
}