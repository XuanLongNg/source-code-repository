#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    public:
    string masv;
    string name;
    string Class;
    string email;
    SinhVien(){}
    ~SinhVien(){}
    friend istream &operator>>(istream &is,SinhVien &p){
        is>>p.masv;
        scanf("\n");
        getline(is,p.name);
        is>>p.Class;
        is>>p.email;
        return is;
    }
    friend ostream &operator<<(ostream &out,SinhVien &p){
        out<<p.masv<<" "<<p.name<<" "<<p.Class<<" "<<p.email<<endl;  
        return out;
    }
};
bool sort_by_class(SinhVien a,SinhVien b){
    if(a.Class==b.Class) return a.masv<b.masv;
    return a.Class<b.Class;
}
void sapxep(SinhVien ds[],int n){
    sort(ds,ds+n,sort_by_class);
}
int main(){
    SinhVien ds[1000];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}