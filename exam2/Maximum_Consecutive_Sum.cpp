#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int a[5000];
	int sum ,maxSum;
	int n ,m;
	int i,j;
//	freopen("array_maxConsecutiveSum.in","r",stdin);
	while(scanf("%d",&n)){
//            puts("WWW");
        while(n){
            sum=0; maxSum=-888;
            scanf("%d",&m);
            for(i=0;i<m; i++){
                scanf("%d",&a[i]);
            }
            for(i=0; i<m; i++){
                sum+=a[i];
                if(sum<0)
                    sum=0;
                if(sum>maxSum)
                    maxSum=sum;
            }
            printf("%d\n",maxSum);
            n--;
        }
	}
	return 0;
}
