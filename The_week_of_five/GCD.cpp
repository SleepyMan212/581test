#include <iostream>
using namespace std;

int c;
int gcd(int a,int b){
    int t; c=1;
    while(a%b!=0){
        t=a%b;
        a=b;
        b=t;
        c+=1;
    }
//    do{
//        t=a%b;
//        a=b;
//        b=t;
//        c++;
//    }while(a%b);
    return b;
}
int main(){
	int a,b,gcd_num,n;
	while(cin>>n){
        for(int i=0; i<n; ++i){
            cin>>a>>b;
            if(a>b)
                gcd_num=gcd(a,b);
            else{
                gcd_num=gcd(b,a);
                c++;
            }
//                gcd_num=gcd(b,a);X
            cout<<"gcd("<<a<<","<<b<<")="<<gcd_num<<", using "<<c<<" division.";
            if(i<n-1)
                cout<<endl;
        }
	}

	return 0;
}
