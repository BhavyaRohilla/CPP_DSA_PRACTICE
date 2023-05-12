#include<iostream>
using namespace std;

int binarySearch(int *arr, int size, int key){
	int start = 0, end = size - 1;
	while(start <= end){
		int mid = start + (end - start)/2;
		if(arr[mid] == key)
			return mid;
		if(key < arr[mid])
			end = mid - 1;
		if(key > arr[mid])
			start = mid + 1;
	}
	return -1;
}



int main(){
	int n,key,arr[100];
	cin>>n>>key;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	cout<<(binarySearch(arr,n,key));
}