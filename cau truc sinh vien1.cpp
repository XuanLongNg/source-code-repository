#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name;
    string lop;
    string date;
    float gpa;
};
void nhapThongTinSV(SinhVien &p){
    getline(cin,p.name);
    cin>>p.lop;
    cin>>p.date;
    cin>>p.gpa;
}
void kiemtra(SinhVien &ts){
	if (ts.date[1] == '/')
        ts.date.insert(0, "0");
    if (ts.date[4] == '/')
        ts.date.insert(3, "0");
}
void inThongTinSV(SinhVien &p){
    kiemtra(p);
    cout<<"N20DCCN001\t"<<p.name<<"\t"<<p.lop<<"\t"<<p.date<<"\t";
    cout<<fixed<<setprecision(2)<<p.gpa<<endl;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}