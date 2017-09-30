#include <iostream>
using namespace std;

int main(){
	int a[201], n,count;
	while(cin>>n){
        if(!n){
            break;
        }
        count=0;
        int i,j;
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        int min;
        for(i=0; i<n-1;i++){
            min=i;
            for(j=min+1; j<n; j++)
            if(a[j]<a[min]){
                min=j;
//                count++;
//                cout<<min<<"AA\n";
            }
            if(min!=i)
                count++;
            int t=a[i];
            a[i]=a[min];
            a[min]=t;
        }
        for(i=0; i<n&&i<3; i++){
            cout<<a[i]<<" ";
        }
        cout<<count<<endl;
	}
	return 0;
}
