#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    freopen("clique.in","r",stdin);
	int a[20][20];
	bool flag;
	int n;
	int i,j;
	while(cin>>n){
        if(!n)
            break;
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            cin>>a[i][j];
        flag=true;
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(a[i][j]!=a[j][i]){
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
	}
	return 0;
}
