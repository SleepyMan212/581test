#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,m;
	int a[3000];
	int i;
	bool is_jolly1,is_jolly2;
	while(cin>>n){
        while(n--){
//            while(cin>>m){
            cin>>m;
            for(i=0; i<m; i++){
                cin>>a[i];
            }
            is_jolly1=true;
            is_jolly2=true;
            for(i=1; i<m; i++){
                if(abs(a[i]-a[i-1])!=m-i){
                    is_jolly1=false;
                }
                if(abs(a[i]-a[i-1])!=i){
                    is_jolly2=false;
                }
            }
            if(is_jolly1||is_jolly2){
                cout<<"jolly";
            }else{
                cout<<"Not jolly";
            }
            if(n!=0)
                cout<<endl;
//            }
        }
	}
	return 0;
}
