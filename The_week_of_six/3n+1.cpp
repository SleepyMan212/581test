//#include <iostream>
//using namespace std;
#include <stdio.h>
int main(){
	int a,b,count,max_count,x,y;
	while(scanf("%d%d",&a,&b)==2){
        if(!a&&!b){
            break;
        }
        x=a; y=b;
        if(b<a){
            int t;
            t=b;
            b=a;
            a=t;
        }
        int i,j;
        max_count=-5555;
        for(i=a; i<=b; i++){
            count=1;
            j=i;
            while(j!=1){
                if(j%2==1){
                    j=j*3+1;
                }else{
                    j/=2;
                }
                count++;
//                cout<<count<<endl;
            }
            if(count>max_count){
                max_count=count;
            }
        }
//        cout<<x<<" "<<y<<" "<<max_count<<endl;
        printf("%d %d %d\n",x,y,max_count);
	}
	return 0;
}
