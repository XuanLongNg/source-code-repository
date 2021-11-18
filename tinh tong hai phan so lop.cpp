#include<bits/stdc++.h>
using namespace std;
long long uoc(long long a,long long b)
{
    if (b == 0) return a;
    return uoc(b, a % b);
}
class PhanSo{
    private:
        long long tu;
        long long mau;
    public:
        PhanSo(long long tu,long long mau){
            this->tu=tu;
            this->mau=mau;
        }
		PhanSo(){
        tu = mau = 0;
		}
        ~PhanSo(){
        tu = mau = 0;
		}
        void rutgon(){
        long long k=uoc(tu,mau);
        tu/=k;
        mau/=k;   
        }
        friend istream &operator>>(istream &is, PhanSo &obj)
        {
            is >> obj.tu;
            is >> obj.mau;
            return is;
        }
        friend PhanSo operator+(PhanSo p, PhanSo q){
            PhanSo t;
            t.tu=q.tu*p.mau+p.tu*q.mau;
            t.mau=q.mau*p.mau;
            t.rutgon();
            return t;
        } 
        friend ostream &operator<<(ostream &os, PhanSo t)
        {
            os << t.tu << "/" << t.mau << endl;
            return os;
        }
        
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
