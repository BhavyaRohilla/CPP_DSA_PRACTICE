#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int secondLargest(int *input, int n){
	if(n <= 1)
		return INT_MIN;

	int first = INT_MIN, second = INT_MIN;   

	for(int i = 0; i < n; i++){
		if(input[i] > first) { 
			second = first;   
			first = input[i];  
	                      }
	else if(input[i] == first)
		continue;
	else if(input[i] > second)
	second = input[i];
	}
	return second;   
}


int main(){
	int n,arr[100];
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	cout<<secondLargest(arr,n);
}