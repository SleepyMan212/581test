#include <iostream>
using namespace std;

void add_sum(int i,int j,int *a){
    int sum=0;
    for(; i<j; i++){
        sum+=a[i];
    }
    cout<<sum;
}
int main(){
	int n,k,t[100000];
	int a,b,i;
	while(cin>>n>>k){
        for(i=0; i<n; i++){
            cin>>t[i];
        }
        for(i=0; i<k; i++){
            cin>>a>>b;
            if(a>b)
                add_sum(b-1,a,t);
            else
                add_sum(a-1,b,t);
            if(i!=k-1)
                cout<<endl;
        }
	}
	return 0;
}
