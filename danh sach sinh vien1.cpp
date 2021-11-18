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
void chuanhoa(string &date){
    if(date[2]!='/') date.insert(0,"0");
    if(date[5]!='/') date.insert(3,"0");
}
void in(SinhVien *p,int n){
    for(int i=0;i<n;i++){
        chuanhoa(p[i].date);
        if(i<9)
        cout<<"B20DCCN00"<<i+1<<" ";
        else cout<<"B20DCCN0"<<i+1<<" ";
        cout<<p[i].name<<" "<<p[i].class1<<" "<<p[i].date<<" ";
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
