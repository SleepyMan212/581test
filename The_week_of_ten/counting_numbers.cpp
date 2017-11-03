#include <iostream>
#include <string.h>
//#include <stdio.h>
using namespace std;

int get_index(int a,int *s,int *c){
    int i;
    for(i=0; i<(*s); i++){
        if(c[i]==a)
            return i;
    }
    c[*s]=a;
//    cout<<c[*s]<<endl;
    return (*s)++;
}
int main(){
//    freopen("counting_numbers.txt","r",stdin);
    int a[100],s,n,t,index,c[100];
    int i,j,k,tmp;
    while(cin>>t){
        for(i=0; i<t; i++){
            s=0;
            memset(c,0,sizeof(c));
            memset(a,0,sizeof(a));
            while(cin>>n){
                if(n==-999){
                    for(j=0; j<s-1; j++){
                        for(k=0; k<s-j-1; k++){
                            if(c[k]<c[k+1]){
                                tmp=a[k];
                                a[k]=a[k+1];
                                a[k+1]=tmp;
                                tmp=c[k];
                                c[k]=c[k+1];
                                c[k+1]=tmp;
                            }
                        }
                    }
                    for(j=0; j<s; j++){
                        cout<<c[j]<<" "<<a[j];
                        if(j!=s-1)
                            cout<<endl;
                    }
                    break;
                }
                index=get_index(n,&s,c);
//                cout<<"c["<<s-1<<"]"<<" "<<c[s-1]<<endl;
//                cout<<index<<endl;
                a[index]+=1;
//                cout<<a[index]<<endl;

            }
            if(i!=t-1)
            cout<<"\n\n";
        }
    }
	return 0;
}
