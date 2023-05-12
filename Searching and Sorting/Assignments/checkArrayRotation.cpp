#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int chemk(int *input, int n){
	if(n <= 1)
		return 0;                               //5 6 1 2 3 4
	int i = 1;                                 
	while(input[i]>input[i-1] && i < n)
		i++;
	if(i == n)
		return 0;
	return i;
}


int main(){
	int n,arr[100];
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	cout<<chemk(arr,n);
}