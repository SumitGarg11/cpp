#include <iostream>
int display(int *arr,int n){
    int sum = 0;
    for(int i= 0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
    
}
int main(){
    // int i = 0;
    // int &j = i;
    // i++;
    // std::cout<<"i: "<<i<<std::endl;
    // j++;
    // std::cout<<"i: "<<i<<std::endl;

// ********************* array of input dynamic allocation **************************

    // int n;
    // std::cin>>n;
    // int* arr = new int[n];
    // for(int i= 0; i<n; i++){
    //     std::cin>>arr[i];
    // }
    // int ans = display(arr,n);
    // std::cout<<"ans: "<<ans;
    // int n;
    // std::cin>>n;
    // // cretaion is done 
    // int** arr = new int*[n];
    // for(int i = 0; i<n; i++){
    //     arr[i] = new int[n];
    // }
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         std::cin>>arr[i][j];
    //     }
    // }
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         std::cout<<arr[i][j];
    //     }
    // }

    int row;
    std::cout<<"row: ";
    std::cin>>row;
    int col;
    std::cout<<" col: ";
    std::cin>>col;

    int** arr = new int*[row];
    for(int i = 0; i<row; i++){
        arr[i] = new int[col];

    }
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            std::cin>>arr[i][j];
        }
    }
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }


    return 0;
}