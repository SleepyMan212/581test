#include <iostream>
using namespace std;

int main(){
	long long int x,y,n,sum;
	while(cin>>x>>y>>n){
        if(!x&&!y&&!n){
            break;
        }
        sum=1;
        int i;
        for(i=0; i<y; i++){
            sum*=x;
            if(sum>n)
                sum%=n;
        }
        cout<<sum<<endl;
	}
	return 0;
}
