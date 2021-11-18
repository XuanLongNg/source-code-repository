#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    int stt;
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
    cin>>p.sex;
    cin>>p.date;
    scanf("\n");
    getline(cin,p.address);
    cin>>p.masothue;
    cin>>p.ngayki;
    cin.ignore();
}
int nam(string a){
    int b;
    b=pow(10,3)*((int)a[6]-'0')+pow(10,2)*((int)a[7]-'0')+pow(10,1)*((int)a[8]-'0')+((int)a[9]-'0');
    return b;
}
int ngay(string a){
    int b;
    b=10*((int)a[3]-'0')+((int)a[4]-'0');
    return b;
}
int thang(string a){
    int b;
    b=10*((int)a[0]-'0')+((int)a[1]-'0');
    return b;
}
int sumofngay(string a){
    int b=nam(a)*365 + thang(a)*30 +ngay(a);
    return b;
}
void sapxep(NhanVien *p,int n){
    int i=0,j=0;
    for(i=0;i<n;i++)
    p[i].stt=i; 
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
        if(sumofngay(p[i].date)>sumofngay(p[j].date))
            swap(p[i],p[j]); 
}
void inds(NhanVien *p,int n){
    for(int i=0;i<n;i++){
        if(p[i].stt<9) cout<<"0000"<<p[i].stt+1<<" ";
        else cout<<"000"<<p[i].stt+1<<" ";
        cout<<p[i].name<<" "<<p[i].sex<<" "<<p[i].date<<" "<<p[i].address<<" "<<p[i].masothue<<" "<<p[i].ngayki<<endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}