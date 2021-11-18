#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name;
    string sex;
    string date;
    string address;
    string masothue;
    string ngayki;
};
void nhap(NhanVien &p){
    getline(cin,p.name);
    getline(cin,p.sex);
    getline(cin,p.date);
    getline(cin,p.address);
    getline(cin,p.masothue);
    getline(cin,p.ngayki); 
}
void in(NhanVien &p){
    cout<<"00001 "<<p.name<<" "<<p.sex<<" "<<p.date<<" "<<p.address<<" "<<p.masothue<<" "<<p.ngayki;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}