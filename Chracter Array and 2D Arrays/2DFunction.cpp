#include<iostream>
using namespace std;

void printArray(int a[][2],int row, int col){
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){

	int a[][2] = {{1,2}, {3,4}};
	printArray(a,2,2);
	/*
	int a[100][100];
	int row,col;
	cin>>row>>col;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cin>>a[i][j];
		}
	}

	printArray(a,row,col);
*/
}