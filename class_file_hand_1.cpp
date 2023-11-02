#include <iostream>
#include <fstream>

using namespace std;
int main(){
    ofstream obj;
    obj.open("lpu.txt");
    obj<<"this is me\n";
    obj<<"this is harry\n";
    obj<<"myself sumit ";
    obj.close();
    string sentence;
    ifstream readout;
    readout.open("lpu.txt");
    while(readout.eof()==0){
        getline(readout,sentence);
        cout<<sentence<<endl;
    }
}