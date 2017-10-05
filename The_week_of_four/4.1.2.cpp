#include <iostream>
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
        if(a>b){
            a=b;
        }
        cin>>b;
        if(a>b){
            a=b;
        }
        cout<<a<<endl;
	}
	return 0;
}
