#include <stdio.h>
int main(){
	int e,o;
	int t,n;
	int p;
	int i;
	while(scanf("%d",&t)==1){
        while(t--){
            scanf("%d",&n);
            o=555555555; e=-555555555;
            for(i=0; i<n; i++){
                scanf("%d",&p);
                if(p>0){
//                    printf("%d\n",p);
                    if(o>p)
                        o=p;
                }
                else
                    if(e<p)
                        e=p;
            }
            if(e==-555555555)
                printf("No\n");
            else
                printf("%d\n",e);
            if(o==555555555)
                printf("No");
            else
                 printf("%d",o);
            if(t)
                puts("\n");
        }
	}
	return 0;
}
