#include<iostream>
#include<vector>
using namespace std;

void pushZero(int *arr, int n){
	 int count = 0;
	 for(int i = 0; i < n ; i++){          // 2 0 0 1 3 0 0
	 	if(arr[i] != 0){
	 		arr[count++] = arr[i];
	 	}
	 }
	 while(count < n){
	 	arr[count++] = 0;
	 }
}

void print(int *arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n,key,arr[100];
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	pushZero(arr,n);
	print(arr,n);
}