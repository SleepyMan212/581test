#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
        int i;
        for(i=n; i>0; i--){
            cout<<i;
        if(i!=0){
            cout<<endl;
        }
        }
	}
	return 0;
}
