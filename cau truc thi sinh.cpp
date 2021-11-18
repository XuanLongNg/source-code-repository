#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string name;
    string date;
    double a;
    double b;
    double c;
};
void nhap(ThiSinh &p){
    getline(cin,p.name);
    getline(cin,p.date);
    cin>>p.a>>p.b>>p.c;
}
void in(ThiSinh &p){
    cout<<p.name<<" "<<p.date<<" ";
    double c=p.a+p.b+p.c;
    cout<<fixed<<setprecision(1)<<c;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
