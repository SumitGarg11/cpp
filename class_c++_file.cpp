#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream writeinto;
    writeinto.open("rohit.txt");
    writeinto<<("vipin");
    writeinto.close();
}