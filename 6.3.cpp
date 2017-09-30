#include <iostream>
using namespace std;

int main(){
	int a[101],b[101],c[101];
	int n;
	while(cin>>n){
        if(!n){
            break;
        }
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
            cout<<b[i]<<" ";
        }
        cout<<endl;
        for(i=0; i<k; i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}
