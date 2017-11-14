#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int min_sum,min_num;
    int p,q;
    int n;
    int i,j;
    int sum;
    while(cin>>n){
        while(n--){
            cin>>p>>q;
            min_sum=6666;
            int t;
            if(q<p){
                q^=p;
                p=q^p;
                q^=p;
            }
            for(i=p; i<=q; i++){
                sum=0;
                t=i; j=1;
                while(j<i){
                    if(t%j==0){
                        sum=sum+j;
//                        cout<<"CC"<<sum<<endl;
//                        t/=j;
                    }
//                    if(t%j){
                        j++;
//                        cout<<"EE"<<endl;
//                    }

//                    cout<<"WW"<<endl;
                }
//                cout<<sum<<endl;
                if(abs(i-sum)<min_sum){
                    min_sum=abs(i-sum);
                    min_num=i;
                }
            }
            cout<<min_sum<<" "<<min_num;
            if(n!=0)
                cout<<endl;
        }
//        cout<<min_sum<<" "<<min_num;
    }
	return 0;
}
