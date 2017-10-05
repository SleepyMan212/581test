#include <iostream>
using namespace std;

int main(){
	int a,b,c,temp;
	while(cin>>a>>b>>c){
        if(a<b){
            temp=a;
            a=b;
            b=temp;
        }
        if(a<c){
            temp=c;
            c=a;
            a=temp;
        }
        if(b<c){
            temp=b;
            b=c;
            c=temp;
        }
//        cout<<a<<" "<<b<<" "<<c<<endl;
        if(a-b<c){
            cout<<"1\n";
        }else{
            cout<<"0\n";
        }

	}
	return 0;
}
