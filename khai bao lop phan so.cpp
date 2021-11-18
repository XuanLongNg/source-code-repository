#include<bits/stdc++.h>
using namespace std;
long long uoc(long long a,long long b)
{
    if (b == 0) return a;
    return uoc(b, a % b);
}
class PhanSo{
    public:
        long long tu;
        long long mau;
        PhanSo(long long tu,long long mau){
            this->tu=tu;
            this->mau=mau;
        }
        friend istream &operator>>(istream &is, PhanSo &obj)
        {
            is >> obj.tu;
            is >> obj.mau;
            return is;
        }
        friend ostream &operator<<(ostream &os, PhanSo obj)
        {
            os << obj.tu << "/" << obj.mau << endl;
            return os;
        }
        void rutgon(){
        long long k=uoc(tu,mau);
        tu/=k;
        mau/=k;   
        }
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
