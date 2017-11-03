#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdio.h>
using namespace std;

void swap(int *a,int *b){
    int t=*b;
    *b=*a;
    *a=t;
}
int main(){
    freopen("score.in","r",stdin);
	int b[1001],a[1001][4];
	int t,n,k,count;;
	double ave[4];
	while(cin>>t){
        int i,j,s;
        count=0;
        for(i=0; i<t; i++){
            count++;
            cin>>n>>k;
            for(j=0; j<n; j++){
                b[j]=j;
                for(s=0; s<3; s++){
                    cin>>a[j][s];
                }
                a[j][3]=a[j][2]+a[j][1]+a[j][0];
            }
            for(j=0; j<n-1; j++){
                for(s=0; s<n-j-1; s++){
                    if(a[b[s]][3]<a[b[s+1]][3]){
                        swap(&b[s],&b[s+1]);
//                        cout<<"AA"<<a[b[s]][3]<<" "<<a[b[s+1]][3]<<endl;
                    }else if(a[s][3]==a[s+1][3]){
                        int o;
                        for(o=0; o<3; o++){
                            if(a[b[s]][o]<a[b[s+1]][o]){
                                swap(&b[s],&b[s+1]);
                            }
                        }
                    }
                }
            }
//            for(j=0; j<n; j++){
//                cout<<a[j][3]<<" ";
//            }
//            cout<<endl;
            memset(ave,0,sizeof(ave));
            for(j=0; j<3; j++){
                for(s=0; s<n; s++)
                    ave[j]+=a[s][j];
                ave[j]/=n;
            }
            for(j=0; j<k; j++){
                for(s=0; s<4; s++){
                    cout<<a[b[j]][s];
                    if(s!=3)
                        cout<<" ";
                }
                cout<<endl;
            }
            for(j=0; j<3; j++){
                cout<<fixed<<setprecision(2)<<ave[j];
                if(j!=2)
                    cout<<" ";
            }
//            cout<<endl;
            if(count<t){
                cout<<endl<<endl;
            }
        }
	}
	return 0;
}
