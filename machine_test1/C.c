//#include <iostream>
//using namespace std;
#include <stdio.h>
#include <stdlib.h>
int cmp(int *a,int *b){
    return *a-*b;
}
int main(){
	int a[10000],b[10000],t;
	int p,q,n;
	int i,j;
	while(scanf("%d%d%d",&p,&q,&n)==3){
        j=0;
        for(i=0; i<n; i++){
            scanf("%d",&t);
            if((t%p==0&&t%q!=0)||t%p!=0&&t%q==0){
                a[j++]=t;
            }
        }
//        for(i=0; i<j-1; i++){
//            printf("%d ",a[i]);
//        }
//        puts("");
        qsort(a,j,sizeof(int),cmp);
        for(i=0; i<j-1; i++){
            printf("%d ",a[i]);
        }
        printf("%d",a[i]);

        puts("");
	}

	return 0;
}
