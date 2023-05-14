#include<iostream>
#include<vector>
using namespace std;

void replace(char *input,char c, char r){
	int i = 0;
	while(input[i]){
		if(input[i] == c)
			input[i] = r;
		i++;
		
	}
}

int main(){
	char name[400],c,r;
	cin>>name;
	cin>>c>>r;
	replace(name,c,r);
	cout<<name;
	
}

