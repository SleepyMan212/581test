#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
using namespace std;

void ad(char a[],char b[],char c[]){
    unsigned long x,y;
    int i;
    x=atoi(a);
    y=atoi(b);
    sprintf(c,"%d",x+y);


}

char* rev(char *a){
    char *b=new char(strlen(a));
    int i=0;
    for(i=0; i<strlen(a); i++){
        b[strlen(a)-i-1]=a[i];
    }
    return b;
}
int main(){
	char a[12],*b,c[12],d[12];
	int i,n,cou;

    while(cin>>n){
        while(n--){
                cin>>a;
                cou=0;
                strcpy(c,a);
                while(strcmp(a,rev(c))!=0){
                    strcpy(d,a);

                    b=rev(a);
                    ad(d,b,c);
                    strcpy(a,c);
                    cou++;
                }
                cout<<cou<<" ";
                for(i=0; i<strlen(a); i++)
                    cout<<c[i];
                if(n>0){
                    cout<<endl;
                }

        }
    }
	return 0;
}

