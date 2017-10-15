#include <iostream>
#include <string.h>
using namespace std;

int main(){

	int count_num;
	string s,a;
	int i,j;
	bool is_true;
	while(cin>>a>>s){
        count_num=0;
        for(i=0; i<s.length(); i++){
            is_true=true;
            for(j=0; j<a.length(); j++){
                if(a[j]!=s[j+i]||j+i>=s.length()){
                    is_true=false;
                    break;
                }
            }
            if(is_true){
                count_num++;
            }

        }
        cout<<count_num<<endl;
	}
	return 0;
}
