#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n,a,b,x,y;
	bool has_quality;
	while(cin>>n){
        int i,j;
        for(i=0; i<n; i++){
            cin>>a;
            has_quality=false;
            b=a;
            for(j=2; j<=a; j++){
                x=y=0;
                while(a%j==0){
                    x=j;
                    y++;
                    a/=j;
                    has_quality=true;
                }
                if(x&&y)
                    cout<<x<<endl<<y<<endl;
            }
            if(!has_quality){
                cout<<a<<endl<<"1\n";
            }
            if(i<n-1)
            cout<<endl;
        }
	}
	return 0;
}
