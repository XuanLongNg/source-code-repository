#include<bits/stdc++.h>
using namespace std;
struct toado{
    double x,y,z;
};
struct point{
    struct toado a,b,c,d;
};
void nhapa(point &p){
    cin>>p.a.x>>p.a.y>>p.a.z;
    cin>>p.b.x>>p.b.y>>p.b.z;
    cin>>p.c.x>>p.c.y>>p.c.z;
    cin>>p.d.x>>p.d.y>>p.d.z;
}
void kiemtra(point &p,int &k){
    toado A,B,C,tich_co_huong;
    A.x=p.a.x-p.b.x;
    A.y=p.a.y-p.b.y;
    A.z=p.a.z-p.b.z;
    B.x=p.a.x-p.c.x;
    B.y=p.a.y-p.c.y;
    B.z=p.a.z-p.c.z;
    C.x=p.a.x-p.d.x;
    C.y=p.a.y-p.d.y;
    C.z=p.a.z-p.d.z;
    tich_co_huong.x=A.y*B.z-A.z*B.y;
    tich_co_huong.y=A.z*B.x-A.x*B.z;
    tich_co_huong.z=A.x*B.y-A.y*B.x;
    double kiem_tra1;
    kiem_tra1=tich_co_huong.x*C.x+tich_co_huong.y*C.y+tich_co_huong.z*C.z;
    if(kiem_tra1==0) k=1;
    else k=0;
}
int main(){
    long n;
    cin>>n;
    while(n--){
        point a;
        nhapa(a);
        int k=0;
        kiemtra(a,k);
        if(k==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } 
}