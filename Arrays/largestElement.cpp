#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,input[100]; 
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>input[i];
    }

    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(input[i] > max){
            max = input[i];
        }
    }
    cout<<max<<endl;
}