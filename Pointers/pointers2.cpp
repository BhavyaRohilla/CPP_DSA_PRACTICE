#include<iostream>
using namespace std;

int main(){
	int i = 1;
	int* p = &i;

	cout << sizeof(p) << endl;
	cout << i << endl;
	cout << *p << endl;

	i++;

	cout << i << endl;
	cout << *p << endl; 
}