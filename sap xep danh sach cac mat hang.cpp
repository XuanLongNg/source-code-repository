#include<bits/stdc++.h>
using namespace std;
struct MatHang{
    string name;
    string nhom_hang;
    float gia_mua;
    float gia_ban;
    int stt;
};
void nhap_hang(MatHang &p,int i){
    scanf("\n");
    getline(cin,p.name);
    getline(cin,p.nhom_hang);
    cin>>p.gia_mua;
    cin>>p.gia_ban;
    cin.ignore();
    p.stt=i+1;
}
void sapxep(MatHang *p,int n){
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    if((p[i].gia_ban-p[i].gia_mua)<(p[j].gia_ban-p[j].gia_mua))
    swap(p[i],p[j]);
}
void inds(MatHang p){
    cout<<p.stt<<" "<<p.name<<" "<<p.nhom_hang<<" ";
    cout<<fixed<<setprecision(2)<<p.gia_ban-p.gia_mua<<endl;
}
int main(){
    struct MatHang ds[50];
    int N;
    cin >> N;
    for(int i=0;i<N;i++) nhap_hang(ds[i],i);
    sapxep(ds,N);
    for(int i=0;i<N;i++) inds(ds[i]);
    return 0;
}