#include <bits/stdc++.h>
using namespace std;


// void rev(queue<int> &q, int k ) {
//         //StepA: queue ->k elements  -> stack

       
//         stack<int> s;
//         int count = 0;
//         int n = q.size();

//         if(k <= 0 || k > n)
//                 return ;

//         while(!q.empty()){
//                 int temp = q.front();
//                 q.pop();
//                 s.push(temp);
//                 count++;

//                 if(count == k)
//                         break;
//         } 

//         //stepB: stack -> q me qapas
//         while(!s.empty()) {
//                 int temp = s.top();
//                 s.pop();
//                 q.push(temp);
//         }

//         //step C: push n-k element from q front to back 
//         count = 0;
//         while(!q.empty() && n-k != 0) {
//                 int temp = q.front();
//                 q.pop();
//                 q.push(temp);
//                 count++;

//                 if(count == n-k)
//                     break;
//         }

// } 
void rev1(queue<int> &q ,int k){
        stack<int> s;
        int c = 0;
        int n = q.size();
        if(k<=0 || k>n) return;
        while(!q.empty()){
                int e= q.front();
                q.pop();
                s.push(e);
                c++;

                if( c == k) break;
        }
        while(!s.empty()){
                int e = s.top();
                s.pop();
                q.push(e);
        }
        c = 0;
        while(!q.empty() && n-k != 0){
                int e = q.front();
                q.pop();
                q.push(e);
                c++;
                
                if( c == n-k) break;

        }


}
int main(){
    queue<int> q;
    int n;
    cin>>n;
    int k;
    cout<<"K: ";
    cin>>k;
    for(int i = 0; i<n; i++){
    int val;
    cin>>val;
    q.push(val);
   }
   rev1(q,k);
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}


}