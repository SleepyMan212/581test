//#include <iostream>
//using namespace std;
#include <stdio.h>
#include <math.h>
int main(){
//	char s[200];
	int n;
	int a[2],j;
	while(scanf("%d",&n)==1){
        a[0]=a[1]=0;
    j=0;
        while(n!=0){
            a[(j++)%2]+=n%10;
            n/=10;

        }
        printf("%d\n",abs(a[0]-a[1]));

	}
	return 0;
}
