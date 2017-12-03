#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
    int n,m,b;
    int a[500];
    int i,j,k;
    int max_num,num;
//    freopen("hamming.in","r",stdin);
    while(cin>>n){
        for(i=0; i<n; i++){
            memset(a,0,sizeof(a));
            max_num=-6666;
            cin>>m;
            for(j=0; j<m; j++){
                cin>>a[j];
            }
//            cout<<"================================"<<endl;
            for(j=0; j<m; j++){
                for(k=j+1; k<m; k++){
//                    cout<<"FFFFFFFFFFFFFFFFFFFFF"<<endl;
                    num=0;
                    b=(a[j]^a[k]);
//                    cout<<b<<"LLL"<<endl;
                    while(b!=0){
                        if(1&(b))
                            num++;
                        b=b>>1;
                    }
                    if(num>max_num){
                        max_num=num;
                    }
                }
            }
//            cout<<"WWWW"<<endl;
            cout<<max_num;
            if(i!=n-1)
                cout<<endl;
        }
    }
	return 0;
}
