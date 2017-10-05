#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(b*b==4*a*c){
        cout<<"1"<<endl;
    }else{
        cout<<"0\n";
	}
	return 0;
}
