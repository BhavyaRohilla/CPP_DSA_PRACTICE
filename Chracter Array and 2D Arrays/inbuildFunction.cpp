#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char input[100] = "abcd";
	char input1[100] = "def";

	cout<<"Before copying => "<<endl;
	cout<<"Input 1 => "<< input<<endl;
	cout<<"Input 2 => "<< input1<<endl;
	// strcpy(input, input1);
	strncpy(input, input1,3);
	cout<<"After copying => "<<endl;
	cout<<"Input 1 => "<< input<<endl;
	cout<<"Input 2 => "<< input1<<endl;

	//cin >> input >> input1;
  /*int len = strlen(input);
	cout<<"Length of String => "<<len<<endl; */

  /*bool check = strcmp(input, input1);
	cout<<"Equal => "<<check;*/
}