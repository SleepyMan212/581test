#include <iostream>
using namespace std;

int main(){
    int a,n;
    int i,j;
    while(cin>>n){
//        cin>>n;
        int k;
        for(k=0; k<n; k++){
            cin>>a;
            for(i=1; i<=a; i++){
                for(j=1; j<=i; j++){
                    cout<<j;
                    if(j!=i)
                    cout<<" ";
                }
//                if(i!=a||k<n-1)
                cout<<endl;
            }
            if(k<n-1)
                cout<<endl;
        }
    }
	return 0;
}
