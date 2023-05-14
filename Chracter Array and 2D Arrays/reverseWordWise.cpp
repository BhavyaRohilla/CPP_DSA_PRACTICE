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

void reverse(char *input, int start, int end){
	while(start < end){
		swap(input[start++],input[end--]);
	}
}

void reverseString(char *input){
	int j = length(input)- 1;
	int i = 0;
	while(i < j){
		swap(input[i++], input[j--]);
	}
}


void reverseWordWise(char *input){
	reverseString(input);
	int start = 0,end = 0,i;				
	for(i = 0; input[i] != '\0'; i++){		
		if(input[i] == ' '){				
			end = i - 1;                            
			reverse(input, start, end);
			start = i + 1;
		}
	}
	end = i - 1;
	reverse(input,start,end);

}

int main(){
	char name[400],c,r;
	cin.getline(name, 100);
	reverseWordWise(name);
	cout<<name;	
}

