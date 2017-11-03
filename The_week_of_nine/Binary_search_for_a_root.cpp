#include <iostream>
#include <cmath>
#include <iomanip>
//#include <stdio.h>
using namespace std;

double f(int p,double x,double *c){
    int i;
    double sum=0;
    for(i=p; i>=0; i--){
        sum=sum+pow(x,i)*c[i];
//        cout<<"WW"<<sum<<endl;
    }
//    cout<<endl;
    return sum;
}
int main(){
//    freopen("Binary_search_for_a_root.txt","r",stdin);
//    freopen("root.in","r",stdin);
    double c[8],x,a,b;
    int time,p;
    while(cin>>time){
//        cout<<pow(0.5,0)<<endl;
        int i,j;
        for(i=0; i<time; i++){
            cin>>p;
            for(j=p; j>=0; j--){
                cin>>c[j];
            }
            cin>>a>>b;
            x=(a+b)/2;
            while(abs(f(p,x,c))>0.0000001){
//            cout<<"f("<<x<<")="<<f(p,x,c)<<endl;
//            cout<<"AA/n";
//            cout<<"f(a)="<<f(p,a,c)<<endl<<"f("<<x<<")="<<f(p,x,c)<<endl;
                if(f(p,a,c)*f(p,x,c)<0){
                    b=x;
                }else{
                    a=x;
                }
                x=(a+b)/2;
            }
            cout<<fixed<<setprecision(5)<<x;
            if(i!=time-1)
            cout<<endl;
        }
    }
	return 0;
}
