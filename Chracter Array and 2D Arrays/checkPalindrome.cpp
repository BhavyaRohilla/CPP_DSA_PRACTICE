#include<iostream>
#include<vector>
using namespace std;

int length(char *input){
	int count = 0;
	for(int i = 0; input[i] != '\0'; i++){
		count++;
	}
	return count;
}

bool reverseString(char *input){
	int len = length(input);
	int i = 0, j = len - 1;
	while(i < j){
		if(input[i++] == input[j--]);
		else
			return false;
	}
	return true;
}

int main(){
	char name[400];
	cin.getline(name, 100);
	cout<<reverseString(name)<<endl;
	
}

