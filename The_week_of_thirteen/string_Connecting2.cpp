#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
//    freopen("ST14.in","r",stdin);
	string ans;
	int n ,m;
	int t,max_t;
	while(cin>>n){
        while(n--){
            cin>>m;
            string s[m];
            ans.clear();
            max_t=-1e9;
            for(int i=0; i<m; i++){
                cin>>s[i];
            }
            ans=s[0];
//            cout<<"WWW"<<endl;
            for(int i=1; i<m; i++){
//                cout<<ans<<endl;
                max_t=0;
                for(int j=ans.size()-1; j>=0; j--){
                    t=0;
                    for(int k=0; k<s[i].size()&&(j+k)<ans.size(); k++){
//                       cout<<ans[j+k]<<" "<<s[i][k]<<endl;
                        if(ans[j+k]!=s[i][k]){
//                            cout<<ans[j+k]<<" "<<s[i][k]<<endl;
                            break;
                        }else{
//                            cout<<"ww"<<endl;
                            t++;

                        }
                    }
//                    cout<<ans.size()<<" "<<j<<" "<<t<<endl;
//                    t=ans.size()-j-1
                    if(max_t<t&&t==ans.size()-j){
                        max_t=t;
                    }
//                    cout<<max_t<<endl;;
                }
//                cout<<"======================"<<endl;
//                cout<<max_t<<endl;
                if(max_t==ans.size()){
                    ans=s[i];
                }else{
                    ans=ans+s[i].substr(max_t);
                }
            }
            cout<<ans.size()<<endl<<ans;
            if(n)
                cout<<endl;
        }
	}
	return 0;
}
