#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,m;
	int a[3000];
	int i;
	bool is_jolly;
	while(cin>>n){
        while(n--){
//            while(cin>>m){
            cin>>m;
            for(i=0; i<m; i++){
                cin>>a[i];
            }
            is_jolly=true;
            for(i=1; i<m; i++){
                if(abs(a[i]-a[i-1])!=m-i){
                    is_jolly=false;
                    break;
                }
            }
            if(is_jolly){
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
