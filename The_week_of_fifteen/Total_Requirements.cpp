#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(){
    /*
	stringstream ss;
	string s;
	int a,sum;
	while(getline(cin,s)){
        ss.clear();
        ss.str(s);
        sum=0;
        while(ss>>a){
            cout<<a<<endl;
//            ss>>a;
//            if(!ss)
//                break;
            sum+=a;
        }
        cout<<sum<<endl;

	}
*/

	string s;
	while(getline(cin,s)){
        char *t= new char[s.size()+1];
        strcpy(t,s.c_str());
        char *p;
        p=strtok(t,", ");
        int sum=0;
        while(p){
            sum+=atoi(p);
//            if(*(p+1)==',')
            p=strtok(NULL,", ");
//            else
//                p=strtok(NULL," ");
        }
//        cout<<t<<endl;
        cout<<sum<<endl;
	}

	return 0;
}
