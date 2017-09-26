#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,c,d;
	while(cin>>a>>b>>c>>d){
        cout<<2*(abs(c-a)+abs(d-b))<<endl;
	}
	return 0;
}
