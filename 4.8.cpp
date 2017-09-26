#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	int temp;
	while(cin>>a>>b>>c){
        if(b>a){
            temp=a;
            a=b;
            b=temp;
        }
        if(c>a){
            temp=a;
            a=c;
            c=temp;
        }
//        cout<<a<<" "<<b<<" "<<c<<endl;
        if((a*a)==(b*b+c*c)){
            cout<<"3\n";
        }else if((a*a)>(b*b+c*c)){
            cout<<"2\n";
        }else{
            cout<<"1\n";
        }
	}
	return 0;
}
