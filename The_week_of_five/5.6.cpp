#include <iostream>
#include <sstream>
#include <stdlib.h>
using namespace std;

bool is_leap(int y){
    if(y%400==0||(y%4==0&&y%100!=0)){
        return true;
    }else
        return false;
}
int main(){
	int n;
	int sum;
	int mm,yy,dd;
	int i;
	string s;
	int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	while(cin>>n){
        for(i=0; i<n; i++){
            sum=0;
            cin>>s;
//            cout<<s<<endl;
            stringstream delim(s);
            string token;
            getline(delim,token,'/');
            yy=atoi(token.c_str());
            getline(delim,token,'/');
            mm=atoi(token.c_str());
            getline(delim,token,'/');
            dd=atoi(token.c_str());
//            cout<<yy<<" "<<mm<<" "<<dd<<" \n";
            if(mm==29&&!is_leap(yy)){
                cout<<"0\n";
                continue;
            }
            if(yy<1970||month[mm-1]<dd||mm>12){
                cout<<"0\n";
                continue;
            }
            for(i=1970;i<yy; i++){
                if(is_leap(yy)){
                    sum+=366;
                }else
                    sum+=365;
            }
//            cout<<sum<<endl;
            for(i=0; i<mm; i++){
                sum+=month[i];
            }
//            cout<<sum<<endl;
            for(int i=1; i<=dd; i++){
                sum+=1;
            }
            cout<<sum<<endl;
        }
	}
	return 0;
}
