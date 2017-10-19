#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char s[100];
	int sum,i;
	while(cin>>s){
        sum=0;
        for(i=0; i<strlen(s); i++){
            sum+=s[i]-'0';
        }
        cout<<sum<<endl;
	}
	return 0;
}
