// CTB = compile time binding 
// RTB = Runtime Binding 

// CTB:

#include <iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"A"<<endl;
    }
};
class B:public A{     // class a interitance 
    public:
    void show(){
        cout<<"B"<<endl;
    }
    
};

// rut time binding 

class C{
    public:
    virtual  void show(){
        cout<<"C"<<endl;
    }
};
class D:public C{     // class a interitance 
    public:
   virtual void show(){
        cout<<"D"<<endl;

    }
    
};

int main(){
    A *ptr;  // declare a pointer of class A;
    A obj; // obj is object of base class 
    ptr = &obj;
    ptr->show();
    B obj2;
    ptr = &obj2;
    ptr->show();
    // run time 
    C *ptr1;
    C obj3;
    ptr1 = &obj3;
    ptr1->show();
    D obj4;
    ptr1 = &obj4;
    ptr1->show();
    
}

