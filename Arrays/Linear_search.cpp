#include<iostream>
using namespace std;

int linearSearch(int arr[],int n, int key){
	int ans = -1;
	for(int i = 0; i < n; i++){
        if(arr[i] == key)
        	ans = i;
    }
    return ans;
}


int main(){
	int n,input[100],key; 
    cin>>n>>key;
    for(int i = 0; i < n; i++){
        cin>>input[i];
    }
    cout<<linearSearch(input, n, key)<<endl;
}