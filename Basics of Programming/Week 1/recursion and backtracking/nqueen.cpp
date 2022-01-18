//https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/n-queensrecursion-tutorial/

#include <iostream>
using namespace std;

int is_safe(int **board, int x, int y, int n){

	for(int i=0; i<x; i++){
	    if(board[i][y]){
	        return false;
	    }
	}

	int row=x;
	int col=y;
	while(row>=0 && col>=0){
	    if(board[row][col]==1){
	        return false;
	    }
	    row--;
	    col--;
	}
	row=x;
	col=y;
	while(row>=0 && col<n){
	    if(board[row][col]==1){
	        return false;
	    }
	    row--;
	    col++;
	}
	return true;
}

int nqueen(int **board, int x, int n){
	if(x>=n){
		return true;
	}
	for(int i=0; i<n; i++){
	    if(is_safe(board,x,i,n)){
	        board[x][i]=1;
	        if(nqueen(board, x+1, n)){
	            return true;
	        }
	        board[x][i]=0;
	    }
	}
	return false;
}

int main(){
	int n;
	cin>>n;
	int **board;
	board = new int *[n];
	for(int i = 0; i <n; i++){
		board[i] = new int[n];
		for(int j=0; j<n; j++){
			board[i][j]=0;
		}
	}

	if(nqueen(board,0 , n)){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else{
		cout<<"Not possible";
	}
	return 0;
}
