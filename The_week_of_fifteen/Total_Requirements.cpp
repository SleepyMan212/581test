#include <iostream>
#include <sstream>
using namespace std;

int main(){
	stringstream ss;
	string s;
	int a,sum;
	while(getline(cin,s)){
        ss.clear();
        ss.str(s);
        sum=0;
        while(1){
            ss>>a;
            if(!ss)
                break;
            sum+=a;
        }
        cout<<sum<<endl;

	}
	return 0;
}
