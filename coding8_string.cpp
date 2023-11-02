#include <bits/stdc++.h>
using namespace std;
int main(){
    char str1[] = "hello sumit ";
    char a[] = "b";
    char b[] = "a";
    char str2[] = "Intern at  Microsoft Yes";
                
    char str3[100];

    cout<<str1<<endl;
     strcmp(str1,str2);
    cout<<strlen(str1)<<endl;
    cout<<str2<<" "<<endl;
    strcpy(str3,str2);
    cout<<str3<<endl;

    strcat(str1,str2);
    cout<<str1<<endl;

    strcmp(str1,str2); // length of combine str output
    cout<<strlen(str1)<<endl;

    cout<<"length of a: "<<strlen(a)<<endl;
    cout<<"length of b: "<<strlen(b)<<endl;
    cout<<strcmp(a,b)<<endl ;

    char ch = 'a'; // 97;
    ch++; // ch = b;
    int data  = ch; // 98;

    cout<<"ch :"<<ch<<endl;
    cout<<"data: "<<data<<endl;

}