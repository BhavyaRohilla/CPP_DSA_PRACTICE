#include<iostream>
using namespace std;

void sort(int *input, int size){
	int i = 0, temp, j = size - 1;

	while(i < j){                      
		if(input[i] == 1){
			temp = input[j];
			input[j] = input[i];
			input[i] = temp;
			j--;
		}
		else
			i++;
	}
}

int main(){
	int n, arr[100];
	cin>>n;

	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	sort(arr,n);

	for(int i = 0; i < n; i++){
		cout<<arr[i];
	}
}