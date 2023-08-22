#include <iostream>
class node{
    public:
    int data;
    node* next_address_of_node;
    node(int data){
        this->data=data;
        this->next_address_of_node = NULL;
    }
};
int main(){
    node* obj = new node(10);
    std::cout<<obj->data<<std::endl;
    std::cout<<obj->next_address_of_node<<std::endl;
    
    return 0;
}