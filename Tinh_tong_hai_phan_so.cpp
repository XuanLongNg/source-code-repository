#include<bits/stdc++.h>
using namespace std;
long uoc( long  a,long b)
{
    if (b == 0) return a;
    return uoc(b, a % b);
}
struct PhanSo{
    long tu;
    long mau;   
};
void nhap(PhanSo &p){
    	cin>>p.tu>>p.mau;
}
void rutgon(PhanSo &p){
    long k=uoc(p.tu,p.mau);
    p.tu/=k;
    p.mau/=k;
}
PhanSo tong(PhanSo &p,PhanSo &q){
    PhanSo t;
    if(p.mau==q.mau){
        t.tu=p.tu+q.tu;
        t.mau=p.mau;
    }else{
        t.tu=q.tu*p.mau+p.tu*q.mau;
        t.mau=q.mau*p.mau;
    }
    rutgon(t);
    return t;
}
void in(PhanSo p){
    	cout<<p.tu<<"/"<<p.mau;    
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}