#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	string a,b;
	int n;
	bool first;
	while(cin>>n){
            first=true;
        while(n--){
//            if(first){
                cin.ignore();
//                first=false;
//            }
            getline(cin,s);
//            cout<<s<<endl;
//            if(first){
//                cin.ignore();
//                first=false;
//            }
            cin>>a>>b;
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
