#include<iostream>
#include<climits>
using namespace std;

void spiralPrint(int arr[][100], int row, int col){
	int count = 0;
	int total = row * col;

	//INDEX INTIALISATION
	int startingRow = 0;
	int startingCol = 0;
	int endingRow = row - 1;
	int endingCol = col - 1;


	while(count < total){
		//print starting row
		for(int index = startingCol; count < total && index <= endingCol; index++){
			cout<<arr[startingRow][index];
			count++;
		}
		startingRow++;

		//print the ending column
		for(int index = startingRow; count < total && index <= endingRow; index++){
			cout<<arr[index][endingCol];
			count++;
		}
		endingCol--;

		//print ending row
		for(int index = endingCol; count < total && index >= startingCol; index--){
			cout<<arr[endingRow][index];
			count++;
		}
		endingRow--;

		//print starting column
		for(int index = endingRow; count < total && index >= startingRow; index--){
			cout<<arr[index][startingCol];
			count++;
		}
		endingRow--;

	}
}

int main(){
	int a[100][100];
	int row,col;
	cin>>row>>col;
     
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cin>>a[i][j];
		}
	}
	spiralPrint(a,row,col);
	}
