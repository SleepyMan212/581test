//#include <iostream>
#include <string.h>
#include <stdio.h>
//using namespace std;

//void c1(int n,int m){
//    if(m>n/2){
//        m=n-m;
//    }
//    int i,sum1=1,sum2=1;;
//    for(i=1; i<=m; i++){
//        sum1*=(n-i+1);
//        sum2*=i;
//    }
//    cout<<sum1/sum2<<" ";
//}
int main(){
    int a,b,c,d,n;
    int p[3],poly[11][100];
//    while(cin>>n){
        scanf("%d",&n);
        int i,j,k,t;
        for(i=0; i<n; i++){
            memset(poly,0,sizeof(poly));
            poly[0][0]=1;
//            cin>>p[2]>>p[1]>>p[0]>>d;
            scanf("%d%d%d%d",&p[2],&p[1],&p[0],&d);
            for(j=0; j<=d; j++){
                for(k=0; k<2*(j+1)+1; k++){
                    for(t=0; t<3; t++){
                            poly[j+1][t+k]+=poly[j][k]*p[t];
                    }
                }
            }
            for(j=2*d; j>=0; j--){
//                cout<<poly[d][j];
                printf("%d",poly[d][j]);
                if(j)
//                    cout<<" ";
                    printf(" ");
            }
            if(i!=n-1)
//            cout<<endl;
puts("");
        }
//    }
	return 0;
}
