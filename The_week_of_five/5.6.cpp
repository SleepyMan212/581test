#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

bool is_leap(int y){
    if(y%400==0||(y%4==0&&y%100!=0)){
        return true;
    }else
        return false;
}
//freopen("For03_input.txt","r",stdin);
int main(){
//    freopen("For03_input.txt","r",stdin);
	int n;
	int sum;
	int mm,yy,dd;
	int i,j;
	string s;
	int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	while(cin>>n){
        for(j=0; j<n; j++){
            sum=0;
            scanf("%d/%d/%d",&yy,&mm,&dd);
//            if(dd==29&&!is_leap(yy)){
//                cout<<"0\n";
//                continue;
//            }
            if((mm==2&&dd==29&&is_leap(yy))||yy>=1970&&dd>=0&&mm<=12&&mm>=0&&month[mm-1]>=dd){

                for(i=1970;i<yy; i++){
                    if(is_leap(i)){
                        sum+=366;
                    }else
                        sum+=365;
                }
    //            cout<<sum<<endl;
                for(i=0; i<mm-1; i++){
                    sum+=month[i];
                    if(is_leap(yy)&&i==1){
                        sum+=1;
                    }
                }
    //            cout<<sum<<endl;
                for(int i=1; i<=dd; i++){
                    sum+=1;
                }
                cout<<sum;
    //            if(j<n-1)
    //                cout<<endl;
            }else
                cout<<"0";
            if(j<n-1)
                cout<<endl;
        }
	}
	return 0;
}
