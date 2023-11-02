#include <bits/stdc++.h>
using namespace std;
int main(){
    // char s[30];
    // ofstream fileout;
    // ifstream filein;
    // fileout.open("data",ios::app);
    // fileout<<"hello world";
    // fileout.close();
    // filein.open("data",ios::in);
    // filein.getline(s,30);
    // cout<<s;

    // char s[30];
    // ofstream fileout;
    // fstream file;
    // fileout.open("hello",ios::out);
    // fileout<<"hello world";
    // fileout.close();
    // file.open(" hello",ios::in|ios::out);
    // cout<<file.tellg();
    // cout<<file.tellp();
    // file.seekp(6);
    // file.seekg(6);
    // cout<<file.tellg();
    // cout<<file.tellp();
    // file>>s;
    // cout<<s;
char fname[20],ch;
	ifstream fin;
	cout<<"Enter the name of the file: ";
	cin.get(fname,20);
	cin.get(ch);
	fin.open(fname,ios::in);
	if(!fin)
	{
		cout<<"An error occurred in opening the file.\n";
		return 0;
	}
	while(fin)
	{
		fin.get(ch);
		cout<<ch;
	}
	return 0;


    
}



