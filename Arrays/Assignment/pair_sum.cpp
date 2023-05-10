#include<iostream>
using namespace std;

void pairSum(int input[], int size, int x){
	for(int i = 0; i < size; i++){
		for(int j = i + 1; j < size; j++){
			if(i!=j){
				if((input[i] + input[j]) == x){
						if(input[i] < input[j]){
							cout << input[i] << " "<<input[j]<<endl;
						}
						else{
							cout<< input[j] << " "<<input[i] << endl;
						}

				}
			}
		}
	}
}


int main(){
	int n, arr[100],x;
	cin>>n>>x;

	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	pairSum(arr,n,x);
}