#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string masv;
	string name;
    string class1;
    string email;
    string doanhnghiep;
    int stt;
};
void nhap(NhanVien &p,int i){
    cin>>p.masv;
    scanf("\n");
    getline(cin,p.name);
    cin>>p.class1;
    cin>>p.email;
    cin>>p.doanhnghiep;
    p.stt=i;
    cin.ignore();
}
void inds(NhanVien p){
    cout<<p.stt<<" "<<p.masv<<" "<<p.name<<" "<<p.class1<<" "<<p.email<<" "<<p.doanhnghiep;
    cout<<endl;
}
int main(){
    struct NhanVien ds[50];
    int N,i,Q,j;
    string a[5];
    cin >> N;
    cin.ignore();
    for(i = 0; i < N; i++) nhap(ds[i],i+1);
    cin>>Q;
    for(i = 0; i < Q; i++) cin>>a[i];
    for(i = 0; i < N-1; i++)
        for(j = i+1; j < N; j++)
        if(ds[i].masv>ds[j].masv)
        swap(ds[i],ds[j]);
    for(i = 0; i < Q; i++){
        for(j = 0; j < N; j++)
        if(ds[j].doanhnghiep==a[i]){
            inds(ds[j]);
        }
    } 
    return 0;
}
