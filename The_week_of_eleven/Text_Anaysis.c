//#include <iostream>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
//using namespace std;

int main(){
    int n ,t[26],mc;
    int i,j;
    char a[2000];
//    string s;
//    bool first;
    //cin.getline(a,200);
//    freopen("text_ana.in","r",stdin);
//    while(scanf("%d",&n)==1){
//        cin>>n;
        scanf("%d",&n);
        n++;
        for(i=0; i<n; i++){
//            if(first){
//                first=false;
//                cin.ignore();
//            }
//            cin.getline(a,200);
//            puts("RR");
            fgets(a,200,stdin);
            if(i==0)
                continue;
//scanf("%[^/n]s",a);
//            cin>>a;
//            s.assign(a);
            memset(t,0,sizeof(t));
            mc=-1000000;
            for(j=0; j<strlen(a); j++){
//                    puts("F");
                if(isalpha(a[j])){
                    a[j]=toupper(a[j]);
//                    cout<<a[j];
                    t[a[j]-'A']++;
                }
            }
            for(j=0; j<26; j++){
               if(t[j]>mc){
                mc=t[j];
               }
            }
            for(j=0; j<26; j++){
                if(mc==t[j]){
//                    cout<<(char)(j+'A');
                    printf("%c",j+'A');
                }
            }
            if(i!=n-1)
//            cout<<endl;
                puts("");
        }

//    }
	return 0;
}
