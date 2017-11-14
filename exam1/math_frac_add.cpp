#include <iostream>
using namespace std;

int GCD(int a,int b){
    int t;
    while(a%b){
        t=a%b;
        a=b;
        b=t;
    }
    return b;
}
int main(){
    int a,b,x,y;
    int gcd_num;
    int n;
    int m,p,q;
    while(cin>>n){
        while(n--){
            cin>>a>>b>>x>>y;
            p=q=m=0;
            q=(a*y+b*x);
            p=b*y;
            gcd_num=GCD(p,q);
            p/=gcd_num;
            q/=gcd_num;
            if(q/p&&q%p!=0)
                cout<<q/p<<"+("<<q%p<<"/"<<p<<")";
            else if(q/p)
                cout<<q/p;
            else
                cout<<q<<"/"<<p;
            if(n!=0)cout<<endl;
        }
    }
	return 0;
}
