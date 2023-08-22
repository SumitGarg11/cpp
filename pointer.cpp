#include <bits/stdc++.h>
int  display(int *arr,int n){
    // std::cout<<"sizeof(arr): "<<sizeof(arr);
    int sum = 0;
    for(int i = 0;i<n; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    // int num = 4;
    // int *p = &num;
    // std::cout<<"num: "<<num<<std::endl;
    // std::cout<<*p<<std::endl;
    // std::cout<<p<<std::endl;
    // std::cout<<"addaress of num: "<<&num;
    // std::cout<<"size of int: "<<sizeof(num)<<std::endl;
    // std::cout<<"size of pointer: "<<sizeof(p)<<std::endl;
    // std::cout<<" "<<std::endl;
    // int a= num;
    // a++;
    // // std::cout<<num<<std::endl;

    // *p++;
    // std::cout<<num<<std::endl;
    // (*p)++;
    // std::cout<<num<<std::endl;
    // int i = 6;
    // int *ptr = &i;
    // std::cout<<*ptr<<std::endl;
    // (*ptr)++;
    // std::cout<<i<<std::endl;
    // char temp = 'a';
    // char *p = &temp;
    // std::cout<<p<<std::endl;
    int arr[7] = {1,3,3,4,5,6,7};
    std::cout<<display(arr+3,6)<<std::endl;
    
    return 0;
}