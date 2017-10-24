#include <iostream>
//#include <string.h>
//#include <stdio.h>
using namespace std;

int bin(int a,int *b){
//    cout<<"WW";
    int i=0;
    while(a!=0){
        b[i]=a%2;
        a/=2;
        i++;
    }
//        cout<<"AA";
//    for(int k=i-1; k>=0; k--)
//        cout<<b[k];
//        cout<<"CC";
    return i;
}
int main(){
	long long d,y,p;
	long long a[1000][6][6],c[1000][6][6],sum;
	long long i,j,k,t,bl;
	int bin_pow[10000];
//	bin(34,bin_pow);
//    freopen("powermatrix.in","r",stdin);
	while(cin>>d>>y>>p){
        if(!d&&!y&&!p)
            break;
        //input
        for(i=0; i<d; i++){
            for(j=0; j<d; j++){
                cin>>c[0][i][j];
            }
        }
        //covert to binary
        bl=bin(y,bin_pow);

//        bool first=true;

        // calculate the matrix of 2's power
        for(t=0; t<bl-1; t++){
            for(i=0; i<d; i++){
                for(j=0; j<d; j++){
                    sum=0;
                    for(k=0; k<d; k++){
//                        if(first)
//                            sum=sum+(c[t][i][k]*c[t][k][j])%p;
//                        else
                            sum=sum+(c[t][i][k]*c[t][k][j])%p;
//                        sum%=p;
                    }
//                    cout<<sum<<endl;
                    c[t+1][i][j]=sum%p;
//                    cout<<c[0][i][j]<<" ";
                }
//                cout<<endl;
            }
//            first=false;
//            cout<<"WW"<<endl;
        }


        // make a be i
        for(i=0; i<d; i++)
            for(j=0; j<d; j++)
                if(i==j)
                    a[0][i][j]=1;
                else
                    a[0][i][j]=0;

        // calculate the result
        int s=0;
        for(t=0; t<bl; t++){
            if(bin_pow[t]==1){
//                cout<<"AA"<<endl;
                for(i=0; i<d; i++){
                    for(j=0; j<d; j++){
                        sum=0;
                        for(k=0; k<d; k++){
//                            cout<<a[i][k]<<" "<<c[t][k][j]<<endl;
                            sum=sum+(a[s][i][k]*c[t][k][j])%p;
//                            sum%=p;
                        }
                        a[s+1][i][j]=sum%p;
//                        cout<<a[i][j]<<" ";
                    }
//                    cout<<endl;
                }
                s++;
            }
//            cout<<"EE"<<endl;
        }
//        print the result
        for(i=0; i<d; i++){
            for(j=0; j<d; j++){
                cout<<a[s][i][j];
                if(j!=d-1)
                    cout<<" ";
            }
                cout<<endl;
        }
	}
	return 0;
}
