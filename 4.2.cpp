#include <iostream>
using namespace std;

int main(){
	int a[3][2];
	int i,j;
	int min_Num;
    while(1){
            min_Num=1555555;
        for(i=0; i<3; i++){
            for(j=0; j<2; j++){
                cin>>a[i][j];
            }
        }
        for(i=0; i<3; i++){
            if(min_Num>a[i][1]*a[i][1]+a[i][0]*a[i][0]){
                min_Num=a[i][1]*a[i][1]+a[i][0]*a[i][0];
                j=i;
            }
        }
        cout<<a[j][0]<<endl<<a[j][1]<<endl;

	}
	return 0;
}
