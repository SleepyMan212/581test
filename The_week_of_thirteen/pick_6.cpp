#include <iostream>
#include <string.h>
#include <cstdio>

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
bool in[2][999999];
void co(int *a,int *b,int n){
    int i;
    for(i=0; i<n; i++){
        b[i]=a[i];
    }
}

void sel(int *a,int *c,bool *va,int n,bool ty){
    int i,j,k;
    int num=0;
    bool flag ,is_score;
    int d[6];
    co(c,d,n);
//    for(i=0; i<n; i++){
//        cout<<d[i];
//    }
//    cout<<endl;
//    cout<<"WWW"<<endl;
    if(n<6)
        for(i=0; i<6; i++){
            if(!va[i]){
                va[i]=1;
                d[n]=a[i];
                sel(a,d,va,n+1,ty);
                va[i]=0;
            }
        }
    else{
        for(i=0; i<n; i++){
            num=num*10+c[i];
//            cout<<num<<endl;
            if(in[ty][num]==0){
                in[ty][num]=1;
//                cout<<num<<endl;
            }
        }
//        for(i=0; i<6; i++){
//            cout<<c[i];
//        }
//        cout<<endl;
//        for(i=0; i<6; i++){
//            for(j=0; j<6; j++){
//                if(c[i]==b[j]&&!vb[i]){
//                    vb[i]=1;
//                    flag=true;
//                    break;
//
//                }
//            }
//            if(!flag)
//                scores++;
//        }
    }
}
int main(){
	int a[2][6],c[6];
//	int scores;
	int n;
	int i,j,k;
	int ap,bp;
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
            memset(in,0,(sizeof(in)));
//            memset(b_index,0,(sizeof(b_index)))
            ap=bp=0;
            sel(a[0],c,used_A,0,0);
            memset(c,0,sizeof(c));
            sel(a[1],c,used_B,0,1);
//            cout<<"EEEEEEEEEEEEEEEE"<<endl;
            for(i=0; i<999999; i++){
//                    if(index[0][i]==1)
//                        cout<<i<<endl;
//                cout<<i<<endl;
                if(in[0][i]==1&&in[1][i]==0)
                    ap++;
                else if(in[0][i]==0&&in[1][i]==1)
                    bp++;
            }
//            cout<<"WWWWWWWWWW"<<endl;
            cout<<ap<<" "<<bp;
            if(n!=0)
                cout<<endl;
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
