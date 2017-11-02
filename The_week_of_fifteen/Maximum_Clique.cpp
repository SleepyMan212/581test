#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int max_num,n;
bool a[20][20];
bool is_friend(int j,int num,int f[]){
    bool flag=true;
    int i;
    for(i=0; i<=num; i++){
        if(a[j][f[i]]==0){
//            cout<<"WW"<<endl;
            flag=false;
            break;
        }
    }
//    if(flag&&num>=13){
//        for(i=0; i<=num; i++)
//            cout<<"f["<<i<<"]="<<f[i]<<" "<<"a["<<j<<"]["<<f[i]<<"]="<<a[j][f[i]]<<" ";
//        cout<<endl;
//    }
    return flag;
}
void DFS(int k,int j,int num,bool v[],int f[]){
    int i;

    f[num]=j;
    if(max_num<num)
        max_num=num;
    for(i=0; i<n; i++){
        // judge the the ith is friend , not visited, and it are the circal
        if(is_friend(i,num,f)&&a[j][i]){
////            cout<<"WW"<<endl;
            if(!v[i]){
                v[i]=1;
                DFS(k,i,num+1,v,f);
//                v[i]=0;
            }
//            else{
//                if(max_num<num)
//                    max_num=num;
//            }
        }

    }
}
int main(){

	int i,j,k;
	int num;
	bool v[20];
	int f[20];
//	freopen("test.in","r",stdin);
//	freopen("clique.in","r",stdin);
	while(cin>>n){
        if(!n)
            break;
        memset(a,0,sizeof(a));
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        max_num=0;
        for(i=0; i<n; i++){
            for(j=i; j<n; j++){
                //make array inialize
                memset(v,0,sizeof(v));
                memset(f,0,sizeof(f));
                num=0;
                if(a[i][j]&&!v[i]){
                    v[i]=1;
                    f[num++]=i;
                    v[j]=1;
                    DFS(i,j,num,v,f);

                }
//                cout<<"============================================="<<endl;
            }
        }
        cout<<max_num+1<<endl;
	}
	return 0;
}
