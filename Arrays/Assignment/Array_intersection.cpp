#include<iostream>
#include<climits>
using namespace std;

void intersection(int *arr1, int *arr2, int s1, int s2){
	int j;
	for(int i = 0; i < s1; i++){
		for(j = 0; j < s2; j++){
			if(arr1[i] == arr2[j]){
				cout<< arr1[i] << " ";
				arr2[j] = INT_MIN;
				break;
			}
		}
	}
}


int main(){
	int m,n,arr1[100],arr2[100];
	cin>>m>>n;
	for(int i = 0; i < m; i++)
		cin>>arr1[i];
	for(int i = 0; i < n; i++)
		cin>>arr2[i];
	intersection(arr1,arr2,m,n);
}