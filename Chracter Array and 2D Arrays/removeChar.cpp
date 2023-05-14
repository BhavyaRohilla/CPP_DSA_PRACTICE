#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

void removeChar(char *input, char c){
	int j, n = strlen(input);
	for(int i = j = 0; i < n; i++)     
		if(input[i] != c)
			input[j++] = input[i];

		input[j] = '\0';

		cout<<input;
}


int main(){
	char s[100],c;
	cin.getline(s,100);
	cin>>c;
	removeChar(s,c);
}


