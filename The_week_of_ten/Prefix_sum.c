//#include <iostream>
#include <stdio.h>
//using namespace std;

void add_sum(int i,int j,int *a){
    int sum=0;
    for(; i<j; i++){
        sum+=a[i];
    }
//    cout<<sum;
    printf("%d",sum);
}
int main(){
	int n,k,t[100000];
	int a,b,i;
	while(scanf("%d%d",&n,&k)==2){
        for(i=0; i<n; i++){
//            cin>>t[i];
            scanf("%d",&t[i]);
        }
        for(i=0; i<k; i++){
//            cin>>a>>b;
            scanf("%d%d",&a,&b);
            if(a>b)
                add_sum(b-1,a,t);
            else
                add_sum(a-1,b,t);
            if(i!=k-1)
//                cout<<endl;
                puts("");
        }
	}
	return 0;
}
