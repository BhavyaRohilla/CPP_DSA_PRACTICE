#include<iostream>
using namespace std;

int pairSum(int input[], int size, int x){
	int triplet = 0;
	for(int i = 0; i < size; i++){
		for(int j = i + 1; j < size; j++){
			for(int k = j + 1; k < size; k++){
				if(input[i] + input[j] + input[k] == x)
					triplet++;
			}		
	}
  }
  return triplet;
}

int main(){
	int n, arr[100],x;
	cin>>n>>x;

	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	cout<<pairSum(arr,n,x);
}