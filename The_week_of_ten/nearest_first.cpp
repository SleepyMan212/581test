#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int main(){
	int t,n,a[1001][3],x,y;
	int min_P,len;;
	while(cin>>t){
        int i,j,k;
        for(i=0; i<t; i++){
            cin>>n;
            memset(a,0,sizeof(a));
            x=y=len=0;
            for(j=0; j<n; j++){
                cin>>a[j][0]>>a[j][1];
            }
            min_P=0;
            for(j=0; j<n; j++){
                for(k=1; k<n; k++){
                    if(a[k][2]==0&&abs(a[k][0]-x)+abs(a[k][1]-y)<abs(a[min_P][0]-x)+abs(a[min_P][1]-y)){
                        min_P=k;
                    }
                }
                len+=abs(a[min_P][0]-x)+abs(a[min_P][1]-y);
                a[min_P][2]=1;
                x=a[min_P][0];
                y=a[min_P][1];
                int o=0;
                while(a[min_P][2]==1){
                    min_P=o;
                    o++;

                }

            }
            cout<<len<<endl;
        }
	}
	return 0;
}
