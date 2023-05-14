#include<iostream>
#include<vector>
using namespace std;

void trim(char *input){
	int i = 0, j = 0;                    
	while(input[i]){
		if(input[i] != ' '){

			input[j] = input[i];
			j++;
		}
		i++;
		
	}
	input[j] = '\0';
}

int main(){
	char name[400],c,r;
	cin.getline(name, 100);
	trim(name);
	cout<<name;
	
}

