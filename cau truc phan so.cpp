#include<bits/stdc++.h>
using namespace std;
long long uoc(long long  a,long long b)
{
    if (b == 0) return a;
    return uoc(b, a % b);
}
struct PhanSo{
    long long tu;
    long long mau;   
};
void nhap(PhanSo &p){
    	cin>>p.tu>>p.mau;
	}
void rutgon(PhanSo &p){
    long long k=uoc(p.tu,p.mau);
    p.tu/=k;
    p.mau/=k;
}
void in(PhanSo &p){
    	cout<<p.tu<<"/"<<p.mau;    
	}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
