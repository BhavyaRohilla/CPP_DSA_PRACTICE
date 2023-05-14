#include<iostream>
#include<climits>
using namespace std;

void wavePrint(int arr[][100], int rows, int cols){
	for(int i = 0;i < cols; i++){
		if(i % 2 == 0){
			for(int j = 0;j < rows; j++){       
				cout<<arr[j][i]<<" ";			  
			}									   
		}
		else
		{
			for(int j = rows - 1; j >= 0; j--){
				cout<< arr[j][i]<<" ";
			}
		}
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
	wavePrint(a,row,col);
	}
