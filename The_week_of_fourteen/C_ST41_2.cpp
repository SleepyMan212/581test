#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
//    freopen("st41.in","r",stdin);
	string s;
	string a,b;
	int n;
	bool first;
	while(cin>>n){
        first=true;
        while(n--){
            if(first){
                cin.ignore();
                first=false;
            }
            s.erase();
//            cout<<"%%%%"<<s<<endl;
            getline(cin,s);
//            cout<<s<<endl;
//            if(first){
//                cin.ignore();
//                first=false;
//            }
//            cin>>a>>b;
            getline(cin,a);
            getline(cin,b);
//            cout<<s<<endl<<a<<endl<<b<<endl;
            while(s.find(a)!=string::npos){
                s.replace(s.find(a),a.size(),b);
//                cout<<s<<endl;
            }
            cout<<s;
            if(n!=0)
                cout<<endl;
        }
	}
	return 0;
}
