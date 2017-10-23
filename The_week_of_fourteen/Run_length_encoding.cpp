#include <iostream>
using namespace std;

int main(){
	string s;
	char target[151];
	int cou[151];
	int i,j,c;
	while(cin>>s){
        i=c=j=0;
        while(i<s.length()){
            c=0;
            target[j]=s[i];
            c++; i++;
            while(target[j]==s[i]){
                c++; i++;
            }
            cou[j]=c;
            j++;
        }
        int k;
        for(k=0; k<j; k++){
            cout<<cou[k]<<target[k];
        }
        cout<<endl;
	}
	return 0;
}
