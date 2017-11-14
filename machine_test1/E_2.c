#include <stdio.h>
//#include <math.h>
int abs(int a){
    if(a>0)
        return a;
    else
        return -a;
    }
int main(){
	int n;
	int a[1000];
	int Fulcrum;
	int i,j;
	int l,r;
	int solutin_Fulcrum,solution;
	while(scanf("%d",&n)==1){
        if(!n){
//            puts("");
            break;
        }
        for(i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        solution=1e9;
        solutin_Fulcrum;
        for(Fulcrum=0; Fulcrum<n;Fulcrum++){
                l=r=0;
            for(j=0; j<Fulcrum; j++){
                l=l+a[j]*(Fulcrum-j);
            }
//            printf("%d ",l);
            for(j=Fulcrum+1; j<n; j++){
                r=r+a[j]*(j-Fulcrum);
            }
//            printf("%d\n",r);
            if(abs(l-r)<solution){
                solution=abs(l-r);
//                if(Fulcrum<solutin_Fulcrum)
                solutin_Fulcrum=Fulcrum;
            }
        }
        printf("%d %d\n",solutin_Fulcrum,solution);
	}
	return 0;
}
