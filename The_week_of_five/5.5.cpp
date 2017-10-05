#include <iostream>
using namespace std;

int main(){
	int x,y;
	int n,time,t,ori=64;
	time=x=y=0;
	while(cin>>t){
        cin>>n;
        int i;
        for(i=time; i<t; i++){
            switch(ori%4){
                case 0:
                    y+=10;
                    break;
                case 2:
                    y-=10;
                    break;
                case 1:
                    x+=10;
                    break;
                case 3:
                    x-=10;
                    break;
            }
        }
        if(n==1){
            ori--;
        }else if(n==2){
            ori++;
        }else if(n==3){
            break;
        }
        time=t;
        cout<<"AAA\n";
	}
	cout<<x<<endl<<y<<endl;
	return 0;
}
