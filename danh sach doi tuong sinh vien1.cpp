#include<bits/stdc++.h>
using namespace std;
int masv=0;
void chuan_hoa(string &k){
	masv++;
	if (k[2] != '/')
        k.insert(0, "0");
    if (k[5] != '/')
        k.insert(3, "0");
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
        chuan_hoa(p.date);
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
