#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void sort(int *arr, int n){
	int i, next0 = 0, next2 = n - 1;

	for(i = 0; i <= next2;){                    
		if(arr[i] == 2){						
			swap(arr[i], arr[next2]);
			next2--;                                
		}
		else if(arr[i] == 0){
			swap(arr[i], arr[next0]);
			next0++;
			i++;
		}
		else
			i++;
	}
}

void print(int *arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
}


int main(){
	int n,arr[100];
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	sort(arr,n);
	print(arr,n);
}