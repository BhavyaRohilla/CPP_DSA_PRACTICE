#include<iostream>
using namespace std;

void sum(int *arr1, int *arr2, int m, int n,int *ans){
	int largerInput = (m > n)? m : n;
	int result, carry = 0;

	int i = m - 1, j = n - 1,k = largerInput;

	while(i >= 0 && j >= 0 && k >= 0){
		result = arr1[i] + arr2[j] + carry;
		carry = result / 10;
		ans[k] = result % 10;
		i--; j--; k--;
	}
	if(i < 0){
		while(j >= 0 && k >= 0){
			result = arr2[j] + carry;
			carry = result / 10;
			ans[k] = result % 10;
			j--, k--;
		}
	}
	else{
		while(i >= 0 && k >= 0){
			result = arr1[i] + carry;
			carry = result / 10;
			ans[k] = result % 10;
			i--;k--;
		}
	}
	ans[k] = carry;
	for(int i = 0; i < largerInput; i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;

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

	sum(arr1,arr2,m,n,ans);
}