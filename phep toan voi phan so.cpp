#include<bits/stdc++.h>
using namespace std;
long uoc(long a,long b)
{
    if (b == 0) return a;
    return uoc(b, a % b);
}
struct PhanSo{
    long tu;
    long mau;
};
void rutgon(PhanSo &p){
    long k=uoc(p.tu,p.mau);
    p.tu/=k;
    p.mau/=k;
}
void process(PhanSo A,PhanSo B){
    int k=0;
    PhanSo C,D;
    C.tu=A.tu*B.mau+B.tu*A.mau;
    C.mau=A.mau*B.mau;
    C.tu=pow(C.tu,2);
    C.mau=pow(C.mau,2);
    rutgon(C);
    cout<<C.tu<<"/"<<C.mau<<" ";
    D.tu=A.tu*B.tu*C.tu;
    D.mau=A.mau*B.mau*C.mau;
    if(D.tu<0||D.mau<0){
        k++;
        D.tu=abs(D.tu);
        D.mau=abs(D.mau);
    }
    rutgon(D);
    if(k==1) D.tu=-D.tu;
    cout<<D.tu<<"/"<<D.mau<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}