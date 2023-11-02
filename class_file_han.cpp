#include <iostream>
#include <fstream>
using namespace std;

int main(){

    //fetching data from txt file 

    // string name;
    // cout<<"enter name";
    // cin>>name;
    // ofstream of("vipin.txt");
    // of<<name;
    // of.close();
    // cout<<"data saved\n";

    string s;
    ifstream obj("vipin.txt");
    getline(obj,s);
    cout<<s;
    obj.close();


    return 0;
}