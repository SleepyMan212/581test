#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
	int n,count;
	int v[]={50,10,5,1};
	cin>>n;
    int i;
    for(i=0;i<4; i++){
        if(n>=v[i]){
            cout<<n/v[i]<<endl;
            n%=v[i];
        }
    }
	return 0;
}
