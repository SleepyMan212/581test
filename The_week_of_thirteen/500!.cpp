#include <iostream>
#include <string.h>
#define base 10
using namespace std;

void f(int n){
    int a[10001]={0};
    int i=1,c=0,max_c=0;
    int k;
    a[0]=1;
    while(i<=n){
        c=0;
        for(k=0; k<=max_c; k++)
            a[k]*=i;
//        for(k=0; k<max_c; k++){
//            if(a[c]=base){
//                a[c+1]=a[c+1]+a[c]/base;
//                a[c]%=base;
//            }
//        }
        while(a[c]>=base||c<max_c){
            a[c+1]=a[c+1]+a[c]/base;
            a[c]%=base;
            c++;
        }
        if(c>max_c) max_c=c;
//        for(k=c; k>=0; k--){
//        cout<<a[k]<<" ";
//        }
//        cout<<endl;
        i++;
    }
    for(k=c; k>=0; k--){
        cout<<a[k];
    }
    cout<<endl;
}
int main(){
	int n;
	while(cin>>n){
        cout<<n<<"!\n";
        f(n);

	}
	return 0;
}
