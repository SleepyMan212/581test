//#include <iostream>
//using namespace std;
#include <stdio.h>

int is_leap(int y){
    int flag=0;
    if((y%4==0&&y%100!=0)||y%400==0){
        flag=1;
    }
    return flag;
}
int main(){
	int yy,dd,mm;
    int m[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int n;
    int flag=1;
    while(scanf("%d",&n)==1){
        while(n--){
            scanf("%d/%d/%d",&yy,&mm,&dd);
            flag=1;
            if(yy<2000||dd<=0&&dd>m[mm]||mm<=0||mm>12)
                flag=0;
            if(is_leap(yy)&&mm==2&&dd>29)
                flag=0;
            if(flag)
                printf("Yes");
            else
                printf("No");
            if(n)
                puts("");
        }
    }
	return 0;
}
