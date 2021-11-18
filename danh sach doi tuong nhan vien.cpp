#include<bits/stdc++.h>
using namespace std;
int masv=0;
class NhanVien{
    public:
    string name;
    string gender;
    string date;
    string address;
    string masothue;
    string ngay_ki;
    NhanVien(){}
    ~NhanVien(){}
    friend istream &operator>>(istream &is,NhanVien &p){
        scanf("\n");
        getline(is,p.name);
        is>>p.gender;
        is>>p.date;
        scanf("\n");
        getline(is,p.address);
        is>>p.masothue;
        is>>p.ngay_ki;
        return is;
    }
    friend ostream &operator<<(ostream &out,NhanVien &p){
        masv++;
        if(masv>=10) cout<<"000"<<masv;
        else cout<<"0000"<<masv;
        out<<" "<<p.name<<" "<<p.gender<<" "<<p.date<<" "<<p.address<<" "<<p.masothue<<" "<<p.ngay_ki<<endl;  
        return out;
    }
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}