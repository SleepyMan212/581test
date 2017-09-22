#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
	string s;
	int sum,i;
	while(cin>>s){
        sum=0;
        for(i=0; i<s.length(); i++){
            sum+=s[i]-'0';
        }
        cout<<sum<<endl;
	}
	return 0;
}
