#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
	double a,b,c,d;
	while(cin>>a>>b>>c>>d){
        if(b/a==d/c){
            cout<<"1\n";
        }else{
            cout<<"0\n";
        }
	}
	return 0;
}
