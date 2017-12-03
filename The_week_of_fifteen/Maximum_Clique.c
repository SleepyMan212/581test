//#include <iostream>
//#include <bits/stdc++.h>
#include<string.h>
#include <stdio.h>
//using namespace std;

int main(){
//    	freopen("test.in","r",stdin);
//	freopen("clique.in","r",stdin);
	int n;
    long long int uni;
	long long int a[21];
	int i,j,k;
	long long int tmp;
	int flag;
	int max_num;
	int t;
	while(scanf("%d",&n)==1){
        if(!n){
            break;
        }
        memset(a,0,sizeof(a));
        for(i=0; i<n; i++){
//            a[i]=a[i]|1<<i;
            for(j=0; j<n; j++){
                scanf("%lld",&tmp);
                if(tmp)
                    a[i]=a[i]|1LL<<j;
            }
        }
//        puts("WW");
        max_num=0;
        for(i=0; i<n; i++){
//            t=uni=0;
//            uni=uni|1LL<<i;
            for(j=0; j<n; j++){
                t=uni=0;
                uni=uni|1LL<<i;
            //                flag=1;
                for(k=0; k<n; k++){
                    flag=1;
                    if((a[(j+k)%n]&uni)==uni){
                        uni=uni|(1LL<<((j+k)%n));
                        t++;
                        if(t>max_num){
                            max_num=t;
                        }
                    }

//                    if(flag){
//                        uni=uni|1LL<<(j+k)%10;
//                        t++;
//                        if(t>max_num){
//                            max_num=t;
//                        }
//                    }
                }
            }
        }

        printf("%d\n",max_num+1);
	}
	return 0;
}
