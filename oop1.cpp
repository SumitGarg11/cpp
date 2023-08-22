#include <iostream>
class fruit{
    private:
    int no_of_banana;
    public:
    int num;
    int no_of_orange;
    int getno_of_banana(){
        return no_of_banana;
    }
    int getno_of_orange(){
        return no_of_orange;
    }
    void setno_of_banana(int b){
        no_of_banana = b;
    }
    void setno_of_orange(int o){
        no_of_orange= o;
    }


};
int main(){
    fruit obj1;
    int n;
    std::cout<<"n: ";
    std::cin>>n;
    std::cout<<"no of banana: ";
    obj1.setno_of_banana(n);
    std::cout<<obj1.getno_of_banana()<<std::endl;

    fruit *b = new fruit;
    b->setno_of_banana(n);
    b->setno_of_orange(n+2);
    std::cout<<"no of banana: ";
    std::cout<<(*b).getno_of_banana()<<std::endl;
    
    std::cout<<b->getno_of_banana()<<std::endl;

    return 0;
}