#include<iostream>
#include<vector>
using namespace std;

void insertionSort(int *arr, int n){
	 for(int i = 1; i<n; i++) {
       	int temp = arr[i];
       	int j = i - 1;
        for(; j>=0; j--) {
            if(arr[j] > temp) {
                arr[j + 1] = arr[j];
            }
            else
            	break;
            
        }
        
        
        arr[j + 1] = temp;
           
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

	insertionSort(arr,n);
	print(arr,n);
}