#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string masv;
	string name;
    string lop;
    float diem1;
    float diem2;
    float diem3;
};
void nhapThongTinSV(SinhVien &p){
    getline(cin,p.masv);
    getline(cin,p.name);
    getline(cin,p.lop);
    cin>>p.diem1;   
    cin>>p.diem2;
    cin>>p.diem3;
    cin.ignore();
}
void chuanhoaten(SinhVien &p){
    stringstream ss(p.name);
    string token,name;
    while(ss>>token){
        name+=token;
        name+=" ";
    }
    p.name=name;
}
void inThongTinSV(SinhVien &p,int i){
    chuanhoaten(p);
    cout<<i+1<<" "<<p.masv<<" "<<p.name<<p.lop<<" ";
    cout<<fixed<<setprecision(1)<<p.diem1<<" "<<p.diem2<<" "<<p.diem3<<endl;
}
int main(){
    struct SinhVien a[100];
    int n;
    cin>>n; 
    cin.ignore();
    for(int i=0;i<n;i++){
        nhapThongTinSV(a[i]);  
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
           if(a[i].name>a[j].name)
           swap(a[i],a[j]); 
        }
    }
    for(int i=0;i<n;i++){
        inThongTinSV(a[i],i);
    }   
    return 0;
}