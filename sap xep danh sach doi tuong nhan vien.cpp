#include<bits/stdc++.h>
using namespace std;
int Masv=0;
void chuan_ngay(string &k){
	if (k[2] != '/')
        k.insert(0, "0");
    if (k[5] != '/')            
        k.insert(3, "0");
}
class NhanVien{
    public:
    string name;
    string gender;
    string date;
    string address;
    string masothue;
    string ngay_ki;
    int masv;
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
        Masv++;
        p.masv=Masv;
        chuan_ngay(p.date);
        chuan_ngay(p.ngay_ki);
        return is;
    }
    friend ostream &operator<<(ostream &out,NhanVien &p){
        if(p.masv>=10) out<<"000"<<p.masv;
        else out<<"0000"<<p.masv;
        out<<" "<<p.name<<" "<<p.gender<<" "<<p.date<<" "<<p.address<<" "<<p.masothue<<" "<<p.ngay_ki<<endl;  
        return out;
    }
};
string tong(string h){
    string date=h;
    string k;
    k+=date[6];
    k+=date[7];
    k+=date[8];
    k+=date[9];
    k+=date[0];
    k+=date[1];
    k+=date[3];
    k+=date[4];
    return k;
}
bool ngaysinh(NhanVien a,NhanVien b){
    return tong(a.date)<tong(b.date);
}
void sapxep(NhanVien ds[50],int n){
    sort(ds,ds+n,ngaysinh);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}