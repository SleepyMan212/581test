//#include <iostream>
#include <stdio.h>
//using namespace std;

int main(){
	int a[1000],b[1000],c[2001];
	int t ,a_len,b_len;
	int i,j,x,y,cou;
//	freopen("merge.in","r",stdin);
//	while(scanf("%d",&t)){
        scanf("%d",&t);
//        printf("%d",t);
        for(i=0; i<t; i++){
//            cin>>a_len>>b_len;
            scanf("%d%d",&a_len,&b_len);
            for(j=0; j<a_len; j++){
//                cin>>a[j];
                scanf("%d",&a[j]);
            }
            for(j=0; j<b_len; j++){
                scanf("%d",&b[j]);

            }
//            for(j=0; j<b_len; j++){
//                printf("%d",a[j]);
//
//            }
            x=y=cou=0;
            for(j=0; j<a_len+b_len; j++){
                if((y<b_len&&a[x]>b[y])||(x>=a_len)){
                    if(x<a_len) cou++;
                    c[j]=b[y++];
                }else{
                    if(y<b_len) cou++;
                    c[j]=a[x++];
                }
//                cout<<c[j]<" ";
            }
//            cout<<endl;
//            cout<<cou<<endl;
            printf("%d\n",cou);
            if(a_len+b_len<=6){
                for(j=0; j<a_len+b_len; j++){
//                    cout<<c[j];
                    printf("%d",c[j]);
                    if(j<a_len+b_len-1)
//                        cout<<" ";
                        printf(" ");
                }
            }else{
//                cout<<c[0]<<" "<<c[1]<<" "<<c[2]
//                <<" "<<c[a_len+b_len-3]<<" "<<c[a_len+b_len-2]<<" "<<c[a_len+b_len-1];
                printf("%d %d %d %d %d %d",c[0],c[1],c[2],c[a_len+b_len-3],c[a_len+b_len-2],c[a_len+b_len-1]);
            }
            if(i<t-1){
//                cout<<endl;
                puts("");
            }
        }
//	}
	return 0;
}
