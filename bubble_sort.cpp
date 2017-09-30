#include <iostream>
using namespace std;

int main(){
	int a[201], count,n;
	while(cin>>n){
        int i,j;
        if(!n){
            break;
        }
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        count=0;
        for(i=0; i<n-1; i++){
            for(j=0; j<n-i-1; j++){
                if(a[j]>a[j+1]){
                    count++;
                    int t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
        cout<<count<<endl;
	}
	return 0;
}
