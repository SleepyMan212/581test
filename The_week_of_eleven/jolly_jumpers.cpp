#include <iostream>
#include <cmath>
//#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
	int n,m;
	int a[100000];
	bool b[100000];
	int i,t;
	bool is_jolly1,is_jolly2;
//    freopen("mm22_jolly.in","r",stdin);
	while(cin>>n){
        while(n--){
//                cout<<"WW"<<endl;
//            while(cin>>m){
            cin>>m;
            for(i=0; i<m; i++){
                cin>>a[i];
                b[i]=false;
            }
            memset(b,0,sizeof(b));
            is_jolly1=true;
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
                    b[t]=true;
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
                if(b[i]==false){
                    is_jolly1=false;
                    break;
                }
            }
            if(is_jolly1){
                cout<<"Jolly";
            }else{
                cout<<"Not jolly";
            }
            if(n!=0)
                cout<<endl;
//            }
        }
	}
	return 0;
}
