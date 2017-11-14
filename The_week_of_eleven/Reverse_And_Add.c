//#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//using namespace std;

void ad(char a[],char b[],char c[]){
    unsigned long x,y;
    int i;
    x=atoi(a);
    y=atoi(b);
    sprintf(c,"%d",x+y);


}

char* rev(char *a){
//    char *b=new char(strlen(a));
    char *b=malloc(strlen(a)*sizeof(char));
    int i;
    for(i=0; i<strlen(a); i++){
        b[strlen(a)-i-1]=a[i];
    }
    return b;
}
int f(char *a){
    int i;
    int flag=1;
    for(i=0; i<strlen(a)/2; i++){
        if(a[i]!=a[strlen(a)-1-i])
            flag=0;
    }
    return flag;
}
int main(){
	char a[12],*b,c[12],d[12];
	int i,n,cou;

    while(scanf("%d",&n)==1){
        while(n--){
                scanf("%s",&a);
                cou=0;
                strcpy(c,a);
                while(!f(a)){
                    strcpy(d,a);

                    b=rev(a);
                    ad(d,b,c);
//                    printf("%s %d\n",c,strcmp(a,rev(c)));
                    strcpy(a,c);
                    cou++;
                }
//                cout<<cou<<" ";
                printf("%d ",cou);
                for(i=0; i<strlen(a); i++)
//                    cout<<c[i];
                    printf("%c",c[i]);
                if(n>0){
//                    cout<<endl;
                    puts("");
                }

        }
    }
	return 0;
}

