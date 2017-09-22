#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
	int a,b,c,d;
	int h,w;
	while(cin>>a>>b>>c>>d){
        h=d-b;
        w=c-a;
        cout<<2*(h+w)<<endl;
        cout<<h*w<<endl;
	}
	return 0;
}
