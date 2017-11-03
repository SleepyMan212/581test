#include <iostream>
#include <cctype>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
    int n ,t[26],mc;
    int i,j;
    char a[20000];
    string s;
    bool first;
    //cin.getline(a,200);
    freopen("text_ana.in","r",stdin);
    while(cin>>n){
//        cin>>n;
        for(i=0; i<n; i++){
            if(first){
                first=false;
                cin.ignore();
            }
            cin.getline(a,200);
//            cin>>a;
//            s.assign(a);
            memset(t,0,sizeof(t));
            mc=-1000000;
            for(j=0; j<strlen(a); j++){
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
                    cout<<(char)(j+'A');
                }
            }
            if(i!=n-1)
            cout<<endl;
        }

    }
	return 0;
}
