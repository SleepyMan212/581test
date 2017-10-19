#include <iostream>
using namespace std;

int main(){
	int a,sum;
	while(cin>>a){
        sum=0;
        while(a>0){
            sum=sum+a%10;
            a/=10;
        }
        cout<<sum<<endl;
	}
	return 0;
}
