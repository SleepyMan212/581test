#include <iostream>
using namespace std;

int main(){
	string s;
	int i,n;
	while(cin>>s>>n){
        int i,j,t=s.length();
        for(j=0; j<=n; j++){
            for(i=s.length()-1; i>=t; i--){
                if(s[i]!='0'){
                    cout<<s[i];
                }
            }
            for(i=0; i<t; i++){
                cout<<s[i];
            }
            cout<<endl;
            if(t!=0)
                t--;
        }
	}
	return 0;
}
