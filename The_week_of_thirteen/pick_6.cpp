#include <iostream>
#include <string.h>

using namespace std;

//int GCD(int a,int b){
//    int t;
//    while(b!=0){
//        t=a%b;
//        a=b;
//        b=t;
//    }
//    return a;
//}
int scores;
void select(int *a,int *b,int *c,bool *va,bool *vb,int n){
    int i,j,k;
    bool flag ,is_score;
    if(n<6)
        for(i=0; i<6; i++){
            if(!va[i]){
                va[i]=1;
                c[n]=a[i];
                select(a,b,c,va,vb,n+1);
            }
        }
    else{
        for(i=0; i<6; i++){
            for(j=0 j<6; j++){
                if(c[i]!=b[i]&&!vb[i]){
                    vb[i]=;

                }
            }
        }
    }
}
int main(){
	int a[2][6],c[6];
//	int scores;
	int n,lcm;
	int i,j,k;
//	int sum[2];
    bool used_A[6],used_B[6];
//	cout<<GCD(16,24)<<endl<<GCD(24,16)<<endl;
	while(cin>>n){
        while(n--){
//            sum[0]=sum[1]=0;
            for(i=0; i<2; i++){
                for(j=0; j<6; j++){
                    cin>>a[i][j];
//                    sum[i]+=a[i][j];
                }
            }
            memset(used_A,0,sizeof(used_A));
            memset(used_B,0,sizeof(used_B));
            memset(c,0,sizeof(c));
            scores=0;
            select(a[0],a[1],c,used_A,used_B,0);
            cout<<scores;
////            cout<<sum[1]<<" "<<sum[0]<<endl;
////            lcm=sum[1]*sum[0]/GCD(sum[1],sum[0]);
////            cout<<lcm<<endl;
//            for(i=0; i<6; i++){
//                memset(used,0,sizeof(used));
//                used[i]=1;
//                for(j=0; j<6; j++){
//                    for(k=0; k<6; k++){
//                        if(!used[k]&&a[0][j]==b[1][k]){
//                            flag=false;
//                            used[k]=1;
//
//                        }
//                    }
//                }
//            }
        }
	}
	return 0;
}
