//#include <iostream>
#include <math.h>
//#include <stdio.h>
#include <string.h>
#include <stdio.h>
//using namespace std;

int main(){
	int n,m;
	int a[100000];
	int b[100000];
	int i,t;
	int is_jolly1,is_jolly2;
//    freopen("mm22_jolly.in","r",stdin);
	while(scanf("%d",&n)==1){
        while(n--){
//                cout<<"WW"<<endl;
//            while(cin>>m){
            scanf("%d",&m);
            for(i=0; i<m; i++){
                scanf("%d",&a[i]);
                b[i]=0;
            }
            memset(b,0,sizeof(b));
            is_jolly1=1;
            for(i=1; i<m; i++){
//                if(abs(a[i]-a[i-1])!=m-i){
//                    is_jolly1=false;
//                }
//                if(abs(a[i]-a[i-1])!=i){
//                    is_jolly2=false;
//                }

                if(abs(a[i]-a[i-1])<m){
                    t=abs(a[i]-a[i-1]);
//                    is_jolly1=false;
                    b[t]=1;
                }
//                cout<<"EEE"<<endl;
            }
//            is_jolly1=true;
//            if(is_jolly1){
//                cout<<"Jolly";
//            }else{
//                cout<<"Not jolly";
//            }
            for(i=1; i<m; i++){
                if(b[i]==0){
                    is_jolly1=0;
                    break;
                }
            }
            if(is_jolly1){
//                cout<<"Jolly";
                printf("Jolly");
            }else{
//                cout<<"Not jolly";
                printf("Not jolly");
            }
            if(n!=0)
//                cout<<endl;
                puts("");
//            }
        }
	}
	return 0;
}
