#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row = 0;
    int col = 0;
    int matrix[101][101];
    int direction  = 0;
    int counter = 1;
    for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                matrix[i][j] = 0;
            }
        }
    while(counter<= n*n){
        
        matrix[row][col] = counter;
        if(direction == 0){
            if(col == n-1 || matrix[row][col+1]>0){
                direction = 1;
                row++;
            }
            else{
                col++;
            }
        }
        else if(direction == 1){
            if(row == n-1 || matrix[row+1][col]>0){
                direction = 2;
                col--;
            }
            else{
                row++;
            }
        }
        else if(direction == 2){
            if(col == 0 || matrix[row][col-1]>0){
                direction = 3;
                row--;
            }
            else{
                col--;
            }
        }
        else{
            if(matrix[row-1][col]>0){
                direction=0;
                col++;
            }
            else{
                row--;
            }
        }
        counter++;

    }
    cout<<"SPARAIL MATRIX: "<<endl<<"\t";
    cout<<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<matrix[i][j]<<" ";           
        }
        cout<<endl;
    }
}