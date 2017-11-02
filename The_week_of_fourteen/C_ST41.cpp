#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
	char a[1000],b[1000];
	char *strformer,*pch;
	char s1[1000],s2[1000];
	int n,s1_ln,s2_ln,a_ln,gap;
	int i;
	freopen("st41.in","r",stdin);
	while(cin>>n){
        for(i=0; i<n; ++i){
            if(!i)
                cin.ignore();

            cin.getline(a,100);
            cin.getline(s1,100);
            cin.getline(s2,100);
//                cout<<a<<endl;

//            cout<<s1<<" "<<s2<<endl;
            s1_ln=strlen(s1);
            s2_ln=strlen(s2);
            a_ln=strlen(a);
            gap=0;
            memset(b,'\0',sizeof(b));
//            cout<<"FFF"<<endl;
            strcpy(strformer,a);
//            cout<<"RR"<<endl;
//            b=a;
            pch=strstr(strformer,s1);
            while(pch!=NULL){
//                cout<<"EEE"<<endl;
                gap=(pch-strformer);
//                cout<<gap<<endl;
//                cout<<"WW"<<endl;
//                cout<<strformer<<endl;
                strncat(b,strformer,gap);
//                cout<<b<<"ww"<<endl;;
                strcat(b,s2);
//                gap+=s1_ln;
//                pch++;
                strformer=pch+s1_ln;
                pch=strstr((strformer),s1);
//                b[gap+s2_ln]='\0';
            }
            strcat(b,strformer);
            cout<<i<<"¡@"<<b<<endl;
        }
//            cout<<b;
//        }
	}
//    char s[1000];
//    cin.getline(s,1000);
//    cout<<s;
	return 0;
}
