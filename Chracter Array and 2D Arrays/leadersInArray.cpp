#include<iostream>
using namespace std;

void printLeaders(int arr[],int size){
	for(int i = 0; i < size; i++){
		int j;
		for(j = i + 1; j < size; j++){
			if(arr[i] <= arr[j])
				break;                       // 3 12 34 2 0 -1
		}
		if(j == size)
			cout << arr[i] << " ";
	}
}

int main(){
	int arr[200], n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	printLeaders(arr, n);
}