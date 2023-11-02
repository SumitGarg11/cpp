#include <bits/stdc++.h>
using namespace std;
class st{
    protected:
    int rollno;
    public:
    void get_num(int a){
        rollno = a;

    }
    void put_number(){
        cout<<"roll no"<<rollno<<endl;
    }
};
class test:public st{
    protected:
    float part1,part2;
    public:
    void get_mark(float x,float y){
        part1 = x;
        part2  = y;
    }
    void put_mark(){
        cout<<endl;
        cout<<"part1"<<part1<<endl;
        cout<<"part2"<<part2<<endl;
    }

};
class sports{
     protected:
     float score;
     public:
     void get_score(float s){
        score = s;
     }
     void put_score(){
        cout<<score<<endl;
     }

};
class result:public test, public sports{
    float total;
    public:
    void display();
};
void result::display(){
    total = part1+part2+score;
    put_number();
    put_mark();
    put_score();
    cout<<"Total score: "<<total<<endl;
}
int main(){
    result obj;
    obj.get_num(123);
    obj.get_mark(27.09,33.2);
    obj.get_score(9.0);
    obj.display();
    return 0;
}