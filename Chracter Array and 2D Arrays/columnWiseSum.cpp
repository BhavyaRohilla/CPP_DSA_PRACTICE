#include<iostream>
using namespace std;

int main(){
	int a[100][100];
	int row,col;
	cin>>row>>col;
     
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cin>>a[i][j];
		}
	}

	for(int i = 0; i < col; i++){
		int sum = 0;
		for(int j = 0; j < row; j++){
			sum += a[j][i];
		}
		cout<<sum<<" ";
	}
}