#include <iostream>
using namespace std;

int main(){
	int i,n,s,fn,bn;
	while(cin>>s>>n){
        int i,j,t;
        for(j=0; j<n; j++){
            t=1;
            while(s/t>10){
                t*=10;
            }
            fn=s/10;
            bn=s%10;
            s=bn*t+fn;
            cout<<s<<endl;
        }
	}
	return 0;
}
