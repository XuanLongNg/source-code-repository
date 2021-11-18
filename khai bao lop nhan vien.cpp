#include<bits/stdc++.h>
using namespace std;
#define a() a;
class NhanVien{
    public:
	string name;
    string sex;
    string date;
    string address;
    string masothue;
    string ngayki;
    NhanVien(string name, string sex,string date, string address, string masothue){
        this->name=name;
        this->sex=sex;
        this->date=date;
        this->address=address;
        this->masothue=masothue;
        this->ngayki=ngayki;
    }
    NhanVien(){
        name=sex=date=address=masothue=ngayki="";
    }
    friend istream &operator>>(istream &is, NhanVien &obj){
        getline(is,obj.name);
        getline(is,obj.sex);
        getline(is,obj.date);
        getline(is,obj.address);
        getline(is,obj.masothue);
        getline(is,obj.ngayki); 
        return is;
    }
    friend ostream &operator<<(ostream &os, NhanVien &p){
        os<<"00001 "<<p.name<<" "<<p.sex<<" "<<p.date<<" "<<p.address<<" "<<p.masothue<<" "<<p.ngayki;
        return cout;
    }
};
int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}