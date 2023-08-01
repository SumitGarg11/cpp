#include <iostream>

int power1(int a, int b){
    int ans = 1;
    for(int i = 1; i <= b; i++){
        ans = ans * a;
        
    }
    return ans;
}
int main(){

    int a,b;
    std::cin>>a>>b;
    int answer = power1(a,b);
    std::cout<<" answer is "<<answer<<std::endl;
    return 0;


}