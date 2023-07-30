#include <iostream>
int main(){

    int day;
    std::cin>>day;
    switch(day){
        case 1:
          std::cout<<"Monday";
          break;
        case 2:
          std::cout<<"tuesday";
          break;
        case 3:
          std::cout<<"wednesday";
          break;
        case 4:
        std::cout<<"thrusday";
        break;
        case 5:
          std::cout<<"friday";
          break;
        case 6:
          std::cout<<"saturday";
          break;
        case 7:
          std::cout<<"sunday";
          break;
        default:
          std::cout<<"invalid";
    }
    std::cout<<"checks";
    return 0;
}