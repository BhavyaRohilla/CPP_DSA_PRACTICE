#include<iostream>
using namespace std;



int main(){
	char name[400];
	// cin>>name;
	// cin.getline(name, 400);
	cin.getline(name, 100, 'o');
	cout<<name<<endl;
}

