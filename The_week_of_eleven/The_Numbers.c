//#include <iostream>
#include <string.h>
#include <stdio.h>
//using namespace std;

int main(){

	int count_num;
	char s[1000];
	char a[1000];
	int i,j;
	int is_true;
	while(scanf("%s%s",a,s)==2){
        count_num=0;
        for(i=0; i<strlen(s); i++){
            is_true=1;
            for(j=0; j<strlen(a); j++){
//                printf("%d %d",a[j],s[j+i]);
                if(j+i>=strlen(s)||a[j]!=s[j+i]){
                    is_true=0;
                    break;
                }
            }
            if(is_true){
                count_num++;
            }

        }
//        cout<<count_num<<endl;
        printf("%d\n",count_num);
	}
	return 0;
}
