#include <iostream>
using namespace std;

int main(){

	int n;
	int a;
	while(cin>>n){
        int i,j;
        for(j=0; j<n; j++){
            cin>>a;
            for(i=1; i<a; i++){
                cout<<i<<endl;
            }
            for(i=a;i>=1; i--){
                cout<<i<<endl;
            }
            if(j<n-1)
                cout<<endl;
        }
	}
	return 0;
}
