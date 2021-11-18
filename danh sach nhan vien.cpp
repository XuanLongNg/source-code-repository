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
    scanf("\n");
    getline(cin,p.name);
    scanf("\n");
    getline(cin,p.sex);
    scanf("\n");
    getline(cin,p.date);
    scanf("\n");
    getline(cin,p.address);
    scanf("\n");
    getline(cin,p.masothue);
    scanf("\n");
    getline(cin,p.ngayki); 
}
void kiemtra(string &a){
    stringstream ss(a);
	string ten[10],muon; 
	int i=0,k;
	while(ss>>ten[i]){
		i++;
	}
	k=i;
	for(int i=0;i<=k;i++){
	    muon+=ten[i];
	    if(i!=k) muon+=" ";
	}
	a=muon;
}
void inds(NhanVien p[50], int N){
    for(int i=0;i<N;i++)
    {
        kiemtra(p[i].name);
        kiemtra(p[i].sex);
        kiemtra(p[i].address);
        kiemtra(p[i].date);
        kiemtra(p[i].masothue);
        kiemtra(p[i].ngayki);
        if(i<9)
        cout<<"0000"<<i+1<<" "<<p[i].name<<p[i].sex<<p[i].date<<p[i].address<<p[i].masothue<<p[i].ngayki;
		else cout<<"000"<<i+1<<" "<<p[i].name<<p[i].sex<<p[i].date<<p[i].address<<p[i].masothue<<p[i].ngayki;
	    cout<<endl;
    } 
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
