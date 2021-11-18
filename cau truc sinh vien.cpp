#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name;
    string lop;
    string date;
    double b;
};
void nhap(SinhVien &p){
    getline(cin,p.name);
    getline(cin,p.lop);
    getline(cin,p.date);
    cin>>p.b;
}
void kiemtra(SinhVien &p){
	if(p.date[1]=='/'){
	    int k=p.date.size();
	    p.date.push_back(p.date[k]);
		for(int i=k;i>=3;i--){
			p.date[i]=p.date[i-1];
		}
		p.date[1]=p.date[0];
		p.date[0]='0';
		p.date[2]='/';	
	}
	if(p.date[4]=='/'){
	    int k=p.date.size();
	    p.date.push_back(p.date[k]);
		for(int i=k;i>=6;i--){
			p.date[i]=p.date[i-1];
		}
		p.date[4]=p.date[3];
		p.date[3]='0';
		p.date[5]='/';	
	}
	stringstream ss(p.name);
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
	p.name=muon;
}
void in(SinhVien &p){
    kiemtra(p);
    cout<<"B20DCCN001 "<<p.name<<p.lop<<" "<<p.date<<" ";
    cout<<fixed<<setprecision(2)<<p.b;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}