#include<iostream>
using namespace std;

int main(){
	int a[100][100];
	int row,col;
	cin>>row>>col;
     

    // Row wise
    /*
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cin>>a[i][j];
		}
	}
	*/

	// Column wise
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cin>>a[j][i];
		}
	}

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}