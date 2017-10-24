#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int c[1001];
	char target[1001][1024];
	char s[1001];
	int i ,j,k,t,l;
	while(cin>>s){
        j=k=t=0;
        memset(target,0,sizeof(target));
        for(i=0; i<strlen(s); i++){
//            cout<<i<<endl;
            if(s[i]>'0'&&s[i]<='9'){
//                cout<<"ee\n";
                c[j]=s[i]-'0';
//                cout<<c[j];
                t=0; i++;
//                cout><<(int)s[i];
//                cout<<(18<9);
//                cout<<(s[i]>='a')<<endl<<(s[i]<='z')<<endl<<(s[i]>='A')<<endl<<(s[i]<='Z')<<endl<<endl;
                while(((int)s[i]>=97&&(int)s[i]<=122)||(int)(s[i]>=65&&(int)s[i]<=90)){
//                    cout<<"FF\n";
//                    cout<<"j= "<<j<<" "<<"s["<<i<<"]= "<<s[i]<<endl;
                    target[j][t]=s[i];
//                    cout<<target[j][t];
//                    cout<<i<<endl;
                        i++;
                    t++;
                }
                i--;
//                i--;
            }
//            cout<<"AA\n";
            j++;
        }
//        for(k=0; k<2; k++){
////            for(l=0; l<strlen(target[k]); l++){
//                cout<<target[k];
////            }
//            cout<<endl;
//        }
//        cout<<"WW"<<j;;
        for(i=0; i<j; i++){
            for(l=0; l<c[i]; l++){

                    cout<<target[i];

            }
        }
        cout<<endl;
	}
	return 0;
}
