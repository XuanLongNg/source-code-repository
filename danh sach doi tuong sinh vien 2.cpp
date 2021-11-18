#include<bits/stdc++.h>
using namespace std;
int masv=0;
void chuan_ngay(string &k){
	masv++;
	if (k[2] != '/')
        k.insert(0, "0");
    if (k[5] != '/')
        k.insert(3, "0");
}
void chuan_ten(string &k){
    stringstream ss(k);
    string token,name;
    while(ss>>token){
        name+=token+" ";
    }
    k=name;
    k.pop_back();
    for(int i=0;i<k.size();i++){
        if(k[i]>='A'&&k[i]<='Z') k[i]+=32;
    }
    k[0]-=32;
    for(int i=0;i<k.size();i++){
        if(k[i]==' '&&k[i]!='\0') k[i+1]-=32;
    }
}
class SinhVien{
    public:
    string name;
    string Class;
    string date;
    float gpa;
    SinhVien(){}
    ~SinhVien(){}
    friend istream &operator>>(istream &is,SinhVien &p){
        scanf("\n");
        getline(is,p.name);
        is>>p.Class;
        is>>p.date;
        is>>p.gpa;
        return is;
    }
    friend ostream &operator<<(ostream &out,SinhVien &p){
        chuan_ngay(p.date);
        chuan_ten(p.name);
        if(masv>=10) cout<<"B20DCCN0"<<masv;
        else cout<<"B20DCCN00"<<masv;
        out<<" "<<p.name<<" "<<p.Class<<" "<<p.date<<" ";
        out<<fixed<<setprecision(2)<<p.gpa<<endl;   
        return out;
    }
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}