#include<iostream>
using namespace std;

int unique(int *arr, int n){
	int j;
	for(int i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i==j)                             
				continue;
			if(arr[i] == arr[j])
				break;
		}
		if(j == n){
			return arr[i];
		}
	}
}

int main(){
	int n,arr[100];
	cin>>n;

	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	cout<<unique(arr,n);
}