#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
//    freopen("sort_evenOrOdd.in","r",stdin);
	int a[101],b[101],c[101];
	int n,first=true;
	while(cin>>n){
        if(!n){
            break;
        }
        if(first){
            first=false;
        }else cout<<endl;
        int i,j,k;
        i=j=k=0;
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        for(i=0; i<n; i++){
            if(a[i]%2){
                b[j++]=a[i];
            }else{
                c[k++]=a[i];
            }
        }
        for(i=0; i<j; i++){
            cout<<b[i];
            if(i<j-1)
                cout<<" ";
        }
        cout<<endl;
        for(i=0; i<k; i++){
            cout<<c[i];
            if(i<k-1)
                cout<<" ";
        }
        cout<<endl;

	}
	return 0;
}
