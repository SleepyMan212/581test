#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
	char ch;
	int n,m;
	int i,j;
	unsigned long long int p,q;
	int x,y;
	char op;
	char a[50][100];
	unsigned long long int b[50],c;
//	cout<<(5|3)<<endl;;
//freopen("set-op1.in","r",stdin);
freopen("set-op-t.in","r",stdin);
	while(cin>>m>>n){
        for(i=0; i<m; i++){
            cin>>a[i];
        }
        memset(b,0,sizeof(b));
//        for(i=0; i<50; i++){
//            cout<<b[i];
//        }

        // build set
        for(i=0; i<m; i++){
            for(j=0; j<strlen(a[i]); j++){
                if(a[i][j]>='A'&&a[i][j]<='Z')
                    b[i]=(b[i]|(1uLL<<(a[i][j]-'A')));
//                    if(b[i]&1uLL<<i)
//                    cout<<(char)(i+'A');
                else{
                    b[i]=(b[i]|(1uLL<<(a[i][j]-'a'+26)));
//                    if(c&1uLL<<i)
//                    cout<<(char)(i-26+'a');
                }
//                 if(c&1uLL<<i)
//                    cout<<(char)(i+'A')
//                if(c&1uLL<<i)
//                    cout<<(char)(i-26+'a');
            }
//            for(j=0; j<26; j++){
//                if(b[i]&(1uLL<<j))
//                    cout<<(char)(j+'A');
//            }
////            cout<<"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"<<endl;
//            for(j=26; j<52; j++){
//                if(b[i]&(1uLL<<j))
//                    cout<<(char)(j-26+'a');
//            }
//            cout<<endl;
//            cout<<endl;
        }

        // judge the union or intersection
        for(j=0; j<n; j++){
//                cout<<n<<endl;
            cin>>x>>op>>y;
//            cout<<"EEE"<<endl;
//            cout<<b[x]<<" "<<b[y]<<endl;
//            p=b[x];
//            q=b[y];
//            cout<<b[x]<<" "<<b[y]<<endl;
            switch(op){
//                cout<<"WWWW"<<endl;
                case '*':
//                    cout<<(b[x]&b[y])<<endl;
                    c=(b[y]&b[x]);
                    break;
                case '+':
//                    cout<<(b[x]|b[y])<<endl;
                    c=(b[y]|b[x]);
                    break;
            }
//            cout<<c<<endl;
            if(c==0) cout<<"-1";
            else{
                for(i=0; i<26; i++){
                    if(c&(1uLL<<i))
                        cout<<(char)(i+'A');
                }
                for(i=26; i<52; i++){
                    if(c&(1uLL<<i))
                        cout<<(char)(i-26+'a');
                }
            }
            if(j!=m-1)
                cout<<endl;
        }
	}
	return 0;
}
