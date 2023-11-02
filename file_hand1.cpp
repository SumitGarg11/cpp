#include <fstream>
#include <iostream>
using namespace std;
int main(){
     
     // writeing in file 

    // ofstream obj;
    // obj.open("my file.txt");
    // obj<<"i crack Microsoft ";
    // obj.close();


    // reading a file 
    
    ifstream obj;
    obj.open("my file.txt");
    string  ch;
    obj>>ch;
    while(!obj.eof()){
        cout<<" "<<ch;
        obj>>ch;
    }
    obj.close();

}