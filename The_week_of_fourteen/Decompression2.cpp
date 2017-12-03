#include <iostream>
#include <string.h>
using namespace std;

int main(){
	string s,st;
	bool is_cir;
	int t;
	while(cin>>s){
        t=0; st.clear();
//        cout<<s<<endl;
        is_cir=true;
        for(int i=0; i<s.size(); i++){
//            cout<<i<<" "<<s[i]<<" ";
            if((s[i]>='0'&&s[i]<='9')){
//                cout<<"A";
                if(!is_cir){
                    for(int j=0; j<t; j++){
                        cout<<st;
                    }
                    is_cir=true;
                    t=0;
                    st.clear();
                }
                t*=10;
                t+=s[i]-'0';
            }else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
//                cout<<"B";
                is_cir=false;
//                cout<<s[i];
                st=st+s[i];
                if(i==s.size()-1){
                    for(int j=0; j<t; j++){
                        cout<<st;
                    }
                }
            }

//            cout<<endl;
        }
        cout<<endl;
	}
	return 0;
}
