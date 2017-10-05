#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	char a[20];
	int n,num,type,t[20];
	while(cin>>n){
        int i;
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        num=atoi(a);
//        cout<<num;
        cin>>type;
        int s;
        for(s=0; num>type; s++){
            t[s]=num%type;
            cout<<t[s]<<endl;
            num=(num-t[s])/type;
        }
        t[s]=num;
//        cout<<"WWWWW"<<endl;
        for(;s>=0; s--){
//            cout<<"WWWWW"<<endl;
            cout<<t[s]<<endl;
        }
	}
	return 0;
}
