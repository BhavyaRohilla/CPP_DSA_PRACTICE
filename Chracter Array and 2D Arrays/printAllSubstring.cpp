#include<iostream>
using namespace std;

void printAllSubstring(char *input){
for(int start = 0; input[start] != '\0'; start++){	
	for(int i = start; input[i] != '\0'; i++){
		for(int j = start; j <= i; j++){
			cout<<input[j];
		}
		cout<<endl;
	}                                         
}
}


int main(){
	char input[100] = "abcd";
	printAllSubstring(input);
}