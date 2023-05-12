#include<iostream>
#include<vector>
using namespace std;

void leftRotate(int *arr, int n){
	int temp = arr[0],i;
	for(i = 0; i < n - 1; i++){           
		arr[i] = arr[i + 1];              
	}
	arr[i] = temp;
}

void rotate(int *arr, int n, int d){
	for(int i = 0; i < d; i++){               
		leftRotate(arr,n);
	}
}


void print(int *arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n,key,arr[100],d;
	cin>>n>>d;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	rotate(arr,n,d);
	print(arr,n);
}