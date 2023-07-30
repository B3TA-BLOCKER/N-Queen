// The N-Queen Problem.
/* 
    The n-queens puzzle is the problem of placing n queens on an n x n chessboard
    such that no two queens attack each other.
        * Each Queens should be in different row and colum 
        * Non of them shoul be diagnol to any other Queen 
    
    => Using the concepts of Recursions and Backtracking we find the solution.

*/

#include<iostream>
using namespace std;

bool Is_Safe(int **arr ,int x,int y, int n){
// In this function we'll be checking if there is a Queen present in a colum or not

    for(int row=0;row<x;row++){
        if(arr[row][y] == 1 ){
            return false;
        }
        
    }

    // For checking Left Diagonal
    int row=x,col=y;

    while(row>=0 && col>=0){
        if (arr[row][col] == 1 ){
            return false;
        }
        row -- , col --;
    }

    // For checking Right Diagonal
    row=x,col=y;

    while(row>=0 && col<n){
        if (arr[row][col] == 1 ){
            return false;
        }
        row -- , col ++;
    }

    return true;

}
bool N_Queen(int ** arr ,int x,int n){
    // Base Condition
    if(x>=n){
        return true;
    }

    for (int  col = 0; col < n; col++)
    {
        if (Is_Safe(arr,x,col,n)){
            arr[x][col] =1;

            if (N_Queen(arr,x+1,n)){
                return true;
            }
            arr[x][col]=0; // backtracking
        }

    }
// if placement for the Queen is possible then we'll return Fase 
    return false;     
    

}
int main(){
    int n;
    cout<<"Enter the size of the chessboard : ";
    cin>>n;

    // Dynamically allocating the 2D array
    int **arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }

    if(N_Queen(arr,0,n)){
        // If the function returns true we'll print the matrix.
        for(int i=0;i<n;i++){
       
        for(int j=0;j<n;j++){
           cout<< arr[i][j]<<" ";
        }cout<<endl;
    }
    }



    return 0;
}