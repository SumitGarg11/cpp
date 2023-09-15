#include <iostream>
using namespace std;
class occ{
    public:
    string s;
    char ch;
    
    int display(){
        cin>>s;
        cin>>ch;
        int count = 0;
        for(int i = 0; i<s.length(); i++){
            if(s[i] == ch){
                count++;
            }
            
        }
        return count;
    }
};
int main(){
    occ obj;
     cout<<obj.display();
}