//#include <iostream>
#include <math.h>
//#include <iomanip>
#include <stdio.h>
//using namespace std;

double f(int p,double x,double *c){
    int i;
    double sum=0;
    for(i=p; i>=0; i--){
        sum=sum+pow(x,i)*c[i];
//        cout<<"WW"<<sum<<endl;
//        printf("ee%lf\n",sum);
    }
//    cout<<endl;
    return sum;
}
int main(){
//    freopen("Binary_search_for_a_root.txt","r",stdin);
//    freopen("root.in","r",stdin);
    double c[8],x,a,b;
    int time,p;
//    while(scanf("%d",&time)){
            scanf("%d",&time);
//        cout<<pow(0.5,0)<<endl;
        int i,j;
        for(i=0; i<time; i++){
//            cin>>p;
            scanf("%d",&p);
//            puts("BB");
            for(j=p; j>=0; j--){
//                cin>>c[j];
                scanf("%lf",&c[j]);
            }
//            cin>>a>>b;
            scanf("%lf%lf",&a,&b);
//            puts("PP");
            x=(a+b)/2;
//            printf("%f\n",fabs(f(p,x,c)));
            double t=f(p,x,c);
            while(fabs(t)>0.0000001){
//            cout<<"f("<<x<<")="<<f(p,x,c)<<endl;
//            cout<<"AA/n";
//puts("SS");
//            cout<<"f(a)="<<f(p,a,c)<<endl<<"f("<<x<<")="<<f(p,x,c)<<endl;
                if(f(p,a,c)*t<0){
                    b=x;
                }else{
                    a=x;
                }
                x=(a+b)/2;
                t=f(p,x,c);
//                printf("%.5f",x);
            }
//            cout<<fixed<<setprecision(5)<<x;
            printf("%.5lf",x);
            if(i!=time-1)
//            cout<<endl;
            puts("");
        }
//    }
	return 0;
}
