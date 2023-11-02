#include <iostream>
using namespace std;
class Heap1{
    public:
    int arr[101];
    int size;
    Heap1(){
        size = 0;

    }
    void heapify(int arr[],int n , int i){
        int index = i;
        int largest = index;
        int leftchildindex = 2*i;
        int rightchildindex = 2*i +1;
        if(leftchildindex <size && arr[largest]<arr[leftchildindex]){
                largest = leftchildindex;
            }
        if(rightchildindex < size && arr[rightchildindex] > arr[largest]){
                largest = rightchildindex;
            }

        if(largest != i){
            swap(arr[index],arr[largest]);
           largest = index;
            heapify(arr,n,index);
        }    
    }
    int deleteTopNode(){
        int ans = arr[1];
        arr[1] = arr[size];
         
        size--;
        
        //  replace node in correct postion 
        int index =1;
        
        while(index<size){
            int largest_index = index;
            int leftchildindex = 2*index;
            int rightchildindex = 2*index +1;
            if(leftchildindex <size && arr[largest_index]<arr[leftchildindex]){
                largest_index = leftchildindex;
            }
            if(rightchildindex < size && arr[rightchildindex] > arr[largest_index]){
                largest_index = rightchildindex;
            }
            if(largest_index == index){
                break;
            }
            else{
                swap(arr[index],arr[largest_index]);
            }
        }
        return ans;
    }
    void insertNode(int val){
        size++;
        int index = size;
        arr[index] = val;
        while(index > 1){
            int parentchildnode = index/2;
            if(arr[index]>arr[parentchildnode]){
                swap(arr[index],arr[parentchildnode]);
                index = parentchildnode;
            }
            else{
                break;
            }
        }
    }
    void sort_heap(){
        int n = size;
        while(n!=1){
            swap(arr[1],arr[n]);
         
            n--;
            heapify(arr,n,1);
        }

    }

};
int main(){
    Heap1 h;
    int n;
   
    cin>>n;
    int value;
    for(int i  =0; i<n; i++){
        cin>>value;
        h.insertNode(value);
    }
    for(int i =0; i<=n; i++){
        cout<<h.arr[i]<<" ";
    }
    cout<<"delete node :";
   cout<< h.deleteTopNode()<<endl;
   cout<<"sort the heap : "<<endl;
    h.sort_heap();
     for(int i =0; i<=n; i++){
        cout<<h.arr[i]<<" ";
    }

    cout<<endl;



}