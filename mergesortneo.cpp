#include <iostream>
using namespace std;
void merge(int *a, int s, int e, int mid){
    int i,j,k,temp[e-s+1];
    i = s;
    k = 0;
    j  = mid+1;
    while(i<=mid && j<=e){
        if(a[i]<a[j]){
            temp[k] = a[i];
            k++;
            i++;
            
        }
        else{
            temp[k] = a[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        temp[k] = a[i];
        k++;
        i++;
    }
     while(j<=e){
        temp[k] = a[j];
        k++;
        j++;
    }
    for(int i = s; i<=e; i++){
        a[i] = temp[i-s];
    }

}
void mergesort(int *a, int s, int e){
    int mid;
    if(s<e){
        mid = (s+e)/2;
        mergesort(a,s,mid);
        mergesort(a,mid+1,e);
        merge(a,s,e,mid);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i  =0; i<n; i++){
        cin>>a[i];

    }
    mergesort(a,0,n-1);
    for(int i  =0; i<n; i++){
        cout<<a[i]<<" ";

    }
    
}