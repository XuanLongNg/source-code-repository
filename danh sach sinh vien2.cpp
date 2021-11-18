#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name;
    string class1;
    string date;
    float gpa;
};
void nhap(SinhVien *p,int n){
    for(int i=0;i<n;i++){
        scanf("\n");
        getline(cin,p[i].name);
        cin>>p[i].class1;
        cin>>p[i].date;
        cin>>p[i].gpa;
        cin.ignore();
    }  
}
void chuanhoa(SinhVien &p){
    if(p.date[2]!='/') p.date.insert(0,"0");
    if(p.date[5]!='/') p.date.insert(3,"0");
    stringstream ss(p.name);
    string token,name;
    while(ss>>token){
        name+=token;
        name+=" ";
    }
    p.name=name;
    for(int i=0;i<p.name.size();i++){
        if(p.name[i]>='A'&&p.name[i]<='Z') p.name[i]+=32;
    }
    p.name[0]-=32;
    for(int i=0;i<p.name.size();i++){
        if(p.name[i]==' '&&p.name[i+1]!='\0') p.name[i+1]-=32;
    }
}
void in(SinhVien *p,int n){
    for(int i=0;i<n;i++){
        chuanhoa(p[i]);
        if(i<9)
        cout<<"B20DCCN00"<<i+1<<" ";
        else cout<<"B20DCCN0"<<i+1<<" ";
        cout<<p[i].name<<p[i].class1<<" "<<p[i].date<<" ";
        cout<<fixed<<setprecision(2)<<p[i].gpa;
        cout<<endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}