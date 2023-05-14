#include<iostream>
#include<climits>
using namespace std;

void findLargest(int arr[][100], int rows, int cols){
	int i,j,sum = 0;

	int tempr = INT_MIN;
	int maxRow = 0, maxr = 0;
	// finding each row sum
	for(i = 0; i < rows; i++){
		for(j = 0; j < cols; j++){
			sum = sum + arr[i][j];
		}
	// finding the greatest row
	if(sum > tempr){
		maxRow = sum;
		maxr = i;
		tempr = maxRow;
		}
		// Reset the sum
		sum = 0;
	}

	i = 0; j = 0; sum = 0;
	int tempc = INT_MIN;
	int maxCol = 0, maxc = 0;
	//finding the each column sum
	for(i = 0;i < cols; i++){
		for(j = 0; j < rows; j++){
			// Add the elements
			sum += arr[j][i];
	}
	// finding th greatest column
	if(sum > tempc){
		maxCol = sum;
		maxc = i;
		tempc = maxCol;
		}
	// Reset the sum
	sum = 0;
	}

	// comparing the max row or col
	if(maxRow > maxCol){
		cout<<"row =>"<<maxr<<" "<<maxRow;
	}
	else if(maxRow < maxCol){
		cout<<"column =>"<< maxc << " "<<maxCol;
	}
	else{
		cout<<"row =>"<<maxr<<" "<<maxRow;
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
	findLargest(a,row,col);
	}
