#include<iostream>
using namespace std;

void removeCo(char s[]){
	int nextIndex = 1;
	char lastChar = s[0];
	for(int i = 0; s[i];){
		if(s[i] == lastChar){
			i++;
		}
		else{                            
			s[nextIndex] = s[i];         
			nextIndex++;
			lastChar = s[i];
			i++;
		}
	}
	s[nextIndex] = '\0';

	cout<<s;
}


int main(){
	char s[100];
	cin>>s;
	removeCo(s);
}


