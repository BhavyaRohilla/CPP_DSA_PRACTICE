#include<iostream>
#include<vector>
using namespace std;

void reverse(char *input, int start, int end){
	while(start < end){
		swap(input[start++], input[end--]);
	}
}

void reverseWord(char *input){
	int start = 0,end = 0, i;
	for(i = 0; input[i]; i++){
		if(input[i] == ' '){
			end = i - 1;
			reverse(input,start,end);
			start = i + 1;
		}
	}
	end = i - 1;
	reverse(input, start, end);

	cout<<input;
}


int main(){
	char s[100];
	cin.getline(s,100);
	reverseWord(s);
}


