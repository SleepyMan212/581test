#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
using namespace std;

void intersection(char *a,char *b,char *c){
//    cout<<"xxx"<<endl;
    int i,j,k;
    bool flag;
//    cout<<c<<endl;
    for(i=0; i<strlen(a); i++){
//        cout<<"IIIIIIIIIIIIIIII"<<endl;
        flag=true;
        for(j=0; j<strlen(b);j++){
            if(a[i]==b[j]){
                for(k=0; k<strlen(c); k++){
                    if(c[k]==a[i]){
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    c[strlen(c)]=a[i];
//                    cout<<"a["<<i<<"]="<<a[i]<<" "<<c<<endl;
                    break;
                }
//                c[strlen(c)]=a[i];
            }
        }
    }
//    cout<<c<<endl;
}
void uni(char *a,char *c){
    int i,k;
    bool flag;
//    cout<<"HHHHH"<<endl;
//    cout<<a<<endl;
//    cout<<strlen(a)<<endl<<strlen(c)<<endl;
    for(i=0; i<strlen(a); i++){
        flag=true;
        for(k=0; k<strlen(c); k++){
//            cout<<"MMMMM"<<endl;
            if(c[k]==a[i]){
//                cout<<a[i]<<endl;
//                cout<<"PPPPP"<<endl;
                flag=false;
                break;
            }
//            cout<<flag<<"OOOOOO"<<endl;
//            if(flag){
//                cout<<c[k]<<endl;
//                c[k]=a[i];
//            }
//                cout<<c<<endl;
//                c[k]=a[i];
        }
//        cout<<"TTTT"<<endl;
        if(flag) c[strlen(c)]=a[i];
    }
}
void sort_s(char *c){
    char tmp;
    for(int i=0; i<strlen(c)-1; i++){
        for(int j=0; j<strlen(c)-i-1; j++){
            if(c[j]>c[j+1]){
                tmp=c[j];
                c[j]=c[j+1];
                c[j+1]=tmp;
            }
        }
    }
}
void be_set(char *a,char *b){
    int i,j;
    bool flag;
    for(i=0; i<strlen(a); i++){
        flag=true;
        for(j=0; j<strlen(b); j++){
            if(a[i]==b[j]){
                flag=false;
                break;
            }
        }
        if(flag){
            b[strlen(b)]=a[i];
        }
    }
}
int main(){
    clock_t start ,end;
    start=clock();
	char c[100];
	char a[50][100],b[50][100];
	char op;
	int n,m;
	int x,y;
	int i,j,k;
	freopen("set-op1.in","r",stdin);
	while(cin>>m>>n){
        for(i=0; i<m; i++){
            cin>>a[i];
        }
        memset(b,'\0',sizeof(b));
        for(i=0; i<m; i++){
            be_set(a[i],b[i]);
            cout<<b[i]<<endl;;
        }
//        cout<<"WW"<<endl;
        for(i=0; i<n; i++){
//            cout<<"AAAA"<<endl;
            cin>>x>>op>>y;
//            cout<<"GGG"<<endl;
//        for(i=0; i<n; i++){
//            cout<<"TTT"<<endl;
            memset(c,'\0',sizeof(c));
            switch(op){
                case'+':
//                    memset(c,'\0',sizeof(c));
                    uni(b[x],c);
//                    cout<<c<<"VVV"<<endl;
//                    cout<<c<<endl;
                    uni(b[y],c);
//                    cout<<c<<endl;
//                    cout<<c<<"UUUU"<<endl;
                    break;
                case'*':
//                    cout<<"HHHHHHHHH"<<endl;
                    intersection(b[x],b[y],c);
//                    cout<<"LLLLLLLLLL"<<endl;
//                    if(!c)
//                    cout<<c<<endl;
                    break;
            }
//            cout<<"YYYYYYYYYYYYYYYY"<<endl;
//            cout<<c<<endl;
//            sort_s(c);
//            cout<<"UUUUUUUUUUUUUUU"<<endl;
            if(strlen(c)!=0){
                sort_s(c);
//                cout<<i<<" ";
                cout<<c;
            }
            else{
//                cout<<i<<" ";
                cout<<"-1";
            }
            if(i!=m-1){
                cout<<endl;
            }
//            cout<<"============================================================="<<endl;
        }
        cout<<clock()-start<<endl;
	}
	return 0;
}
