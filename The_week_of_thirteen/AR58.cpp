#include <iostream>
//#include <string.h>
//#include <stdio.h>
using namespace std;

#define base 10

void to_int(int *t,string s){
    int i;
//    for(i=30; i>=0; i--){
//        cout<<t[i];
//    }
//    cout<<endl;
    for(i=s.length()-1; i>=0; i--){
        t[s.length()-i-1]=s[i]-'0';
    }
}
int big_add(string s1,string s2 ,int *c){
    int al=s1.length();
    int bl=s2.length();
    int  i=0;
    int a[31]={0},b[31]={0};
    to_int(a,s1);
    to_int(b,s2);

//    for(i=30; i>=0; i--){
//        cout<<a[i];
//    }
//    cout<<endl;
//    for(i=30; i>=0; i--){
//        cout<<b[i];
//    }
//    cout<<endl;
    for(int k=0; k<31; k++){
        c[k]=0;
//        cout<<c[k];
    }
    while(i<al||i<bl){
        c[i]+=a[i]+b[i];
        if(c[i]>=base){
            c[i+1]=c[i+1]+c[i]/base;
            c[i]%=base;
        }
        i++;
    }
//    if(c[>=10) i++;

//     for(int k=i-1; k>=0; k--){
//        cout<<c[k];
//    }
    // return the length of c
    return i;
}

int main(){
	int c[31]={};
	string s1,s2;
    int n,i,j;
    //record the times
//    freopen("ar58.in","r",stdin);
    while(cin>>n){
        while(n--){
            cin>>s1>>s2;
            j=big_add(s1,s2,c);
            for(i=j-1; i>=0; i--){
                cout<<c[i];
            }
            if(n!=0)
                cout<<endl;
        }
    }
	return 0;
}
