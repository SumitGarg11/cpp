#include <bits/stdc++.h>
using namespace std;
int main(){
    // open a file and write  the data;
    ofstream fout;
    fout.open("mydata.txt");
    fout<<"hello ";
    fout<<"sir\n";
    fout.close();

    ifstream fin;
    char ch;
    fin.open("mydata.txt");
    ch = fin.get();
    while(!fin.eof()){
        cout<<ch;
        ch = fin.get();
    }
    fin.close();

}