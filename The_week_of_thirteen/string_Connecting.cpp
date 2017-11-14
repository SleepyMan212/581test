#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
	char a[31][101],b[15],result[3001];
	int n,m;
	int c,max_c;
	int i,j,k;
    freopen("ST14.in","r",stdin);
	while(cin>>n){
        while(n--){
            cin>>m;
            for(i=0; i<m; i++){
                cin>>a[i];
            }
            memset(result,0,sizeof(result));
            strcpy(result,a[0]);
            for(i=0; i<m-1; i++){
                max_c=0;
                for(j=0; j<strlen(a[i]); j++){
//                    strncmp(*(a[i]+j))
//                    for(k=0; k<strlen(a[i+1]); k++){
                        k=0;
                        while(a[i][j+k]==a[i+1][k]){
                            k++;
                        }
                        if(max_c<k&&j+k==strlen(a[i]))
                            max_c=k;
//                    }
                }
//                cout<<max_c<<endl;
//                for(i=0; iM)
                int re_lenth=strlen(result);
                for(j=strlen(result); j<re_lenth+strlen(a[i+1])-max_c; j++){
                    result[j]=a[i+1][max_c+j-re_lenth];
//                    cout<<a[i+1][max_c+j-strlen(result)];
                }
            }
//            for(j=k; j<strlen(a[i+1]); j++){
//                strcpy(result,a[i+1][j])
//            }
            result[strlen(result)]='\0';
            cout<<strlen(result)<<endl<<result;
            if(n!=0)
                cout<<endl;
//            for(i=0; i<m; i++){
//                for(j=0; j<strlen(a[i]); j++){
//                    cout<<a[i][j];
//                }
//                cout<<endl;
//            }
        }
	}
	return 0;
}
