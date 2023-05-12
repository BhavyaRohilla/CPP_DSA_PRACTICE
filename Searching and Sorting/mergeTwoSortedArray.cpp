#include<iostream>
using namespace std;

void merge(int *arr1, int *arr2, int m, int n,int *ans){
	int i = 0; int j = 0; int k = 0;

	while(i < m && j < n){				// 1 3 6 7 9 11 12 m 5
		if(arr1[i] < arr2[j]){         	// 2 5 8 10  n 4
			ans[k++] = arr1[i++];		// k 1 2 3 5 6 7 8 9 10
		}
		else
			ans[k++] = arr2[j++];
	}

	while(i < m){
		ans[k++] = arr1[i++];
	}

	while(j < n){
		ans[k++] = arr2[j++];
	}
}


int main(){
	int m,n,arr1[100],arr2[100],ans[100];
	cin>>m>>n;

	for(int i = 0; i < m; i++){
		cin>>arr1[i];
	}

	for(int i = 0; i < n; i++){
		cin>>arr2[i];
	}

	merge(arr1,arr2,m,n,ans);

	int size = m + n;
	for(int i = 0; i < size; i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}