#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void add(char a[],char b[],char c[]);
bool is_Pali(char *a);
//int rev(int a){
//    unsigned long t=0;
//    while(a>0){
//        t=t+a%10;
//        a/=10;
//        t*=10;
//    }
//    t/=10;
//    return t;
//}
int main(){
	char a[12],*b,c[12],d[12];
	int i,n,cou;
//	cout<<rev(123)<<endl;
//    cout<<is_Pali("1473")<<endl;
    while(cin>>n){
        while(cin>>a&&n--){
//            while(cin>>a){
                cou=0;
                strcpy(c,a);
                while(strcmp(a,strrev(c))!=0){
                    strcpy(d,a);
        //            cout<<&b<<" "<<&a<<endl;
                    b=strrev(a);
                    add(d,b,c);
                    strcpy(a,c);
                    cou++;
        //        for(i=0; i<strlen(a); i++){
        //            cout<<c[i];
        //        }
//                    for(i=0; i<strlen(a); i++)
//                        cout<<c[i];
//                    cout<<endl;
                }
        //        cout<<atoi(c)<<endl;
                cout<<cou<<" ";
                for(i=0; i<strlen(a); i++)
                    cout<<c[i];
                if(n>0){
//                    cout<<n;
                    cout<<endl;
                }
//            }
//        cout<<n<<endl;
        }
    }
	return 0;
}
void add(char a[],char b[],char c[]){
    unsigned long x,y;
    int i;
    x=atoi(a);
    y=atoi(b);
    sprintf(c,"%d",x+y);


}

