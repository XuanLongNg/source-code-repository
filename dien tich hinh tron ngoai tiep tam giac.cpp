#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
struct toado{
    double xa;
    double ya;
    double xb;
    double yb;
    double xc;
    double yc;
};
void nhap(toado &p){
    cin>>p.xa>>p.ya>>p.xb>>p.yb>>p.xc>>p.yc;
}
void inds(toado &p){
    double a,b,c;
    double x1,y1,x2,y2,x3,y3;
    x1=p.xa-p.xb;
    x2=p.xa-p.xc;
    y1=p.ya-p.yb;
    y2=p.ya-p.yc;
    y3=p.yb-p.yc;
    x3=p.xb-p.xc;
    a=sqrt(pow(x1,2)+pow(y1,2));
    b=sqrt(pow(x2,2)+pow(y2,2));
    c=sqrt(pow(x3,2)+pow(y3,2));
    double H=(a+b+c)*(a+b-c)*(a+c-b)*(b+c-a);
    double dien_tich=sqrt(H)/4;
    double r=(a*b*c)/(4*dien_tich);
    double stron=PI*r*r;
    if((p.xa==p.xb&&p.xa==p.xc)||(p.ya==p.yb&&p.ya==p.yc))
    cout<<"INVALID";
    else if((x1/x2)==(y1/y2))
    cout<<"INVALID";
    else cout<<fixed<<setprecision(3)<<stron;
    cout<<endl;
}
int main(){
    struct toado ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    for(i = 0; i < N; i++) inds(ds[i]);
    return 0;
}