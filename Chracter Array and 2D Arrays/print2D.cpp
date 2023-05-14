#include<iostream>
using namespace std;

void print(int input[][100], int row, int col){
	int k = row;
	for(int i = 0; i < row; i++){						1 2 3 4 5 6 7 8 9
		for(int l = k - 1; l >= 0; l--){
			for(int j = 0; j < col; j++){
				cout<<input[i][j]<<" ";
			}
			cout<<endl;
		}
		k--;
	}
}

int main(){
	int arr[100][100],row,col;
	cin>>row>>col;

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cin>>arr[i][j];
		}
	}


	print(arr,row,col);
}